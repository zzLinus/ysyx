#include <getopt.h>

#include "defs.h"
#include "difftest.h"
#include "dpifunc.h"
#include "infrastructure.h"
#include "mem.h"

VerilatedContext *contextp = new VerilatedContext;
Vtop *top = new Vtop{contextp};
NPCState npc_s = {NPC_STOP, 0, 0};
pmem *mem;
VerilatedVcdC *tfp;
std::string img_prefix;

bool is_halt = false;
uint64_t fs_size = 0; // function stack size
extern uint32_t elf_nums;
extern ElfFuncInfo elf_funcs[ELF_FUNC_MAX];
CPU_state cpu_state = {0};

// NOTE: ftrace
#ifdef CONFIG_FTRACE
uint8_t call_ret = 0;
#endif

uint64_t cpu_cycle = 0;

static inline void reset(int n) {
  npc_s.state = NPC_RESETTING;
  top->rst = 1;
  while (n-- > 0)
    cpu_exec(1);
  top->rst = 0;
}

static void disp_ringbuf() {
  printf("itrace : \n");
  for (int i = 0; i < RINGBUFSIZE; i++) {
    if (i == RINGBUFSIZE - 1)
      printf("--> ");
    else
      printf("    ");

    printf("%s\n", r.insts[(r.cur_inst + i) % RINGBUFSIZE]);
  }
}

void cpu_exec(uint64_t n) {
  while (n--) {
    contextp->timeInc(1);

    if (npc_s.state == NPC_RESETTING)
      goto exec;

    if (top->pc_out == cpu_state.pc) {
      printf("In a Infinet Loop NOW !!!\n");
      disp_ringbuf();
      exit(-1);
    }
    if (top->pc_out < 0x80000000)
      if (break_npc())
        goto itrace;

    uint64_t ti;
    pmem_read(top->pc_out, &ti);
    top->inst = (uint32_t)ti;
    cpu_state.pc = top->pc_out;

  exec:
    // NOTE : single cycle begin

#ifdef CONFIG_ITRACE
#define BUFFSIZE 128
  itrace:
    char logbuf[BUFFSIZE];
    char *p = logbuf;
    p += snprintf(p, sizeof(logbuf),
                  "0x%016x "
                  ":",
                  top->pc_out);
    int ilen = 4;
    int i;
    uint8_t *inst = (uint8_t *)&top->inst;
    for (i = ilen - 1; i >= 0; i--) {
      p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = 8;
    int space_len = ilen_max - ilen;
    if (space_len < 0)
      space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

    disassemble(p, logbuf + sizeof(logbuf) - p, top->pc_out,
                (uint8_t *)&top->inst, ilen);

    strcpy(r.insts[r.cur_inst++], logbuf);
    printf(ANSI_FMT("==>", ANSI_FG_GREEN));
    printf("current inst : %s\n", logbuf);

    r.cur_inst %= RINGBUFSIZE;
#endif

    // single clk pauls
    IF_NPC_S_EXIT(NPC_ABORT);
    top->clk = 1;
    top->eval();
    IF_NPC_S_EXIT(NPC_END);
    top->clk = 0;
    top->eval();
    judge_jump();
    // end single cycle
    //
    if (check_wp())
      return;
#ifdef CONFIG_FTRACE
    if (call_ret == 2) {
      fs_size++;
      printf("%lx :", cpu_state.pc);
      PRINT_TAB(fs_size);
      printf("%s  ", ANSI_FMT("call", ANSI_FG_BLUE));
      for (int i = 0; i < elf_nums; i++) {
        if (top->pc_out == elf_funcs[i].addr)
          printf("[%s@%lx]\n", elf_funcs[i].name, elf_funcs[i].addr);
      }
    } else if (call_ret == 4) {
      printf("%lx :", cpu_state.pc);
      PRINT_TAB(fs_size);
      fs_size--;
      printf("%s  ", ANSI_FMT("return", ANSI_FG_GREEN));
      for (int i = 0; i < elf_nums; i++) {
        if (elf_funcs[i].addr <= top->pc_out &&
            top->pc_out <= elf_funcs[i].addr + elf_funcs[i].size)
          printf("[%s@%lx]\n", elf_funcs[i].name, top->pc_out);
      }
    }
    call_ret = 0;
#endif

    tfp->dump(contextp->time());
    trace_and_difftest(&cpu_state, top);
    printf("\n\n\t================= CPU CYCLE [%ld] DONE =================\n\n",
           cpu_cycle++);
  }
}

void get_imgprefix(std::string &dst, char *p) {
  for (int i = 0;; i++) {
    if (p[i] == '.')
      return;
    else {
      dst.push_back(p[i]);
    }
  }
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {{"batch", no_argument, NULL, 'b'},
                                 {"help", no_argument, NULL, 'h'},
                                 {0, 0, NULL, 0}};
  int o;
  while ((o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    std::cout << "arg : " << o << optarg << std::endl;
    switch (o) {
    case 'b':
      sdb_set_batch_mode();
      break;
    case 1:
      get_imgprefix(img_prefix, optarg);
      return 0;
    default:
      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
      printf("\t-b,--batch              run with batch mode\n");
      printf("\n");
      exit(0);
    }
  }
  return 0;
}

int main(int argc, char **argv, char **env) {
  mem = new pmem();

  parse_args(argc, argv);
  std::cout << "img frefix : " << img_prefix << std::endl;

  contextp->commandArgs(argc, argv);
  contextp->traceEverOn(true);
  tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("logs/vlt_dump.vcd");
  tfp->dumpvars(1, "top");

  welcome();
  init_disasm("riscv64-pc-linux-gnu");
  difftest_init(0);

  mem->read_img(img_prefix.append(".bin").c_str());
  init_ftrace(
      img_prefix.erase(img_prefix.find(".bin"), 4).append(".elf").c_str());
  init_regex();

  reset(2);

  printf("\n\t\t ======== Reset Finished ========\n");

  // Main loop
  npc_s.state = NPC_RUNNING;
  sdb_mainloop();

  disp_ringbuf();

  top->final();
  tfp->close();

  delete mem;

  if (npc_s.state == NPC_END)
    printf("\033[32;1;4mNPC exit with code : %d\033[0m\n", npc_s.state);
  else
    printf("\033[1;31mNPC exit with code : %d\033[0m\n", npc_s.state);
  return npc_s.state;
}
