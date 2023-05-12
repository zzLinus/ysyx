#include <Vtop.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_dpi.h>
#include <verilated_vcd_c.h>

#include "defs.h"
#include "infrastructure.h"

#define CONFIG_ITRACE

class pmem;
VerilatedContext *contextp = new VerilatedContext;
Vtop *top = new Vtop{ contextp };
NPCState npc_s = { NPC_STOP, 0, 0 };
bool is_halt = false;
paddr_t last_pc = 0;
pmem *mem;
uint64_t *cpu_gpr = NULL;
void cpu_exec(uint64_t n);
VerilatedVcdC *tfp;
uint64_t fs_size = 0;  // function stack size
extern uint32_t elf_nums;
extern ElfFuncInfo elf_funcs[ELF_FUNC_MAX];

uint8_t call_ret = 0;
#define RET  call_ret = 1 << 2;
#define CALL call_ret = 1 << 1;

#ifdef CONFIG_ITRACE
#define RINGBUFSIZE 20
#define INSTLEN     80
typedef struct ring_buffer
{
    char insts[RINGBUFSIZE][INSTLEN];
    uint8_t cur_inst;
} ring_buffer;

static ring_buffer r;
#endif

static inline void reset(int n)
{
    npc_s.state = NPC_RESETTING;
    top->rst = 1;
    while (n-- > 0)
        cpu_exec(1);
    top->rst = 0;
}

uint32_t img[INST_NUM] = {
    // default dummy test instructions
    0x00000413,  // 80000000:	00000413          	li	s0,0
    0x00009117,  // 80000004:	00009117          	auipc	sp,0x9
    0xffc10113,  // 80000008:	ffc10113          	addi	sp,sp,-4 # 80009000 <_end>
    0x00c000ef,  // 8000000c:	00c000ef          	jal	ra,80000018 <_trm_init>

    0x00000513,  // 80000010:	00000513          	li	a0,0
    0x00008067,  // 80000014:	00008067          	ret(jalr)

    0xff010113,  // 80000018:	ff010113          	addi	sp,sp,-16
    0x00000517,  // 8000001c:	00000517          	auipc	a0,0x0
    0x01450513,  // 80000020:	01450513          	addi	a0,a0,20 # 80000030 <_etext>
    0x00113423,  //  TODO : 80000024:	00113423          	sd	ra,8(sp)

    0xfe9ff0ef,                          // 80000028:	fe9ff0ef          	jal	ra,80000010 <main>
    0b00000000000000000000000001110011,  // 0000 0000 0000 00000 000 00000 1110011 -> ebreak
    0x0000006f,                          // 8000002c:	0000006f          	j	8000002c <_trm_init+0x14>
                                         //  WARN : infinet loop should not reach here

};

class pmem
{
   public:
    pmem() : fp(NULL)
    {
        FILE *fp = NULL;
        for (int i = 0; i < INST_NUM; i++)  // read in defualt img
        {
            memcpy(mem + i * 4, img + i * 1, sizeof(uint32_t));
        }
    }
    ~pmem(){};
    void read_img(const char *img_file)
    {
        fp = fopen(img_file, "rb");
        if (fp == NULL)
        {
            printf("failed to load img : %s\n", img_file);
            assert(0);
        }
        else
        {
            printf("Success to load img\n");
        }

        fseek(fp, 0, SEEK_END);
        long size = ftell(fp);
        printf("The image is %s, size = %ld\n", img_file, size);

        fseek(fp, 0, SEEK_SET);
        int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
        assert(ret == 1);
        fclose(fp);
    }
    uint64_t pmem_read(uint64_t addr, uint8_t instLen)
    {
        uint64_t ret = host_read(guest_to_host(addr), instLen);
        return ret;
    }

   private:
    uint8_t *guest_to_host(uint64_t paddr)
    {
        return mem + paddr - CONFIG_MBASE;
    }
    uint64_t host_read(void *addr, uint8_t len)
    {
        switch (len)
        {
            case 1:  // == *((type *)addr)
                return *(uint8_t *)addr;
            case 2: return *(uint16_t *)addr;
            case 4: return *(uint32_t *)addr;
            case 8: return *(uint64_t *)addr;
            default: assert(0);
        }
    }

   private:
    FILE *fp;
    uint8_t mem[CONFIG_MSIZE];
};

void print_alu()
{
    printf("alu state : out : 0d%lu 0b%031b 0x%08lx\n", top->alu_out, top->alu_out, top->alu_out);
}

extern "C"
{
    void stop_npc()
    {
        printf("\n\t\t\t    *************\n");
        printf("\t\t\t    ** EBREAK! **\n");
        printf("\t\t\t    *************\n");
        npc_s.state = NPC_END;
    }

    bool break_npc()
    {
        if (npc_s.state == NPC_RESETTING)
            return 0;
        printf("\n\t\t    ***********************************************\n");
        printf("\t\t    ** NOT IMPLEMENTED OR JUMP TO WRONG ADDRESS! **\n");
        printf("\t\t    ***********************************************\n");
        npc_s.state = NPC_ABORT;
        return 1;
    }

    void set_gpr_ptr(const svOpenArrayHandle r)
    {
        cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
    }

    void judge_jump()
    {
        uint8_t dest = BITS(top->inst, 11, 7);
        if ((top->inst & 0x7f) == 0b1100111)
            goto jalr;
        if ((top->inst & 0x7f) != 0b1101111)
            return;

        if (dest != 0)
        {
            call_ret = 1 << 1;
            return;
        };

    jalr:
        if (BITS(top->inst, 19, 15) == 1 && dest == 0)
            call_ret = 1 << 2;
        else
            call_ret = 1 << 1;

        printf("dest reg : %u\n", dest);
    }
}

static void disp_ringbuf()
{
    printf("itrace : \n");
    for (int i = 0; i < RINGBUFSIZE; i++)
    {
        if (i == RINGBUFSIZE - 1)
            printf("--> ");
        else
            printf("    ");

        printf("%s\n", r.insts[(r.cur_inst + i) % RINGBUFSIZE]);
    }
}

void cpu_exec(uint64_t n)
{
    while (n--)
    {
        contextp->timeInc(1);

        if (npc_s.state == NPC_RESETTING)
            goto exec;

        if (top->pc_out == last_pc)
        {
            printf("In a Infinet Loop NOW !!!\n");
            disp_ringbuf();
            exit(-1);
        }
        if (top->pc_out < 0x80000000)
            if (break_npc())
                goto itrace;

        top->inst = mem->pmem_read(top->pc_out, 4);
        last_pc = top->pc_out;

    exec:
        // NOTE : single cycle begin

#ifdef CONFIG_ITRACE
#define BUFFSIZE 128
    itrace:
        char logbuf[BUFFSIZE];
        char *p = logbuf;
        p += snprintf(
            p,
            sizeof(logbuf),
            "0x%016x "
            ":",
            top->pc_out);
        int ilen = 4;
        int i;
        uint8_t *inst = (uint8_t *)&top->inst;
        for (i = ilen - 1; i >= 0; i--)
        {
            p += snprintf(p, 4, " %02x", inst[i]);
        }
        int ilen_max = 8;
        int space_len = ilen_max - ilen;
        if (space_len < 0)
            space_len = 0;
        space_len = space_len * 3 + 1;
        memset(p, ' ', space_len);
        p += space_len;

        disassemble(p, logbuf + sizeof(logbuf) - p, top->pc_out, (uint8_t *)&top->inst, ilen);

        if (npc_s.state == true)
            strcpy(r.insts[r.cur_inst++], logbuf);
        else
            strcpy(r.insts[r.cur_inst++], logbuf);

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
        if (call_ret == 2)
        {
            fs_size++;
            printf("%lx :", last_pc);
            PRINT_TAB(fs_size);
            printf("%s  ", ANSI_FMT("call", ANSI_FG_BLUE));
            for (int i = 0; i < elf_nums; i++)
            {
                if (top->pc_out == elf_funcs[i].addr)
                    printf("[%s@%lx]\n", elf_funcs[i].name, elf_funcs[i].addr);
            }
        }
        else if (call_ret == 4)
        {
            printf("%lx :", last_pc);
            PRINT_TAB(fs_size);
            fs_size--;
            printf("%s  ", ANSI_FMT("return", ANSI_FG_GREEN));
            for (int i = 0; i < elf_nums; i++)
            {
                if (elf_funcs[i].addr <= top->pc_out && top->pc_out <= elf_funcs[i].addr + elf_funcs[i].size)
                    printf("[%s@%lx]\n", elf_funcs[i].name, top->pc_out);
            }
        }
        call_ret = 0;
#endif

        tfp->dump(contextp->time());
        printf("\n\n\t================= CPU CYCLE DONE =================\n\n");
    }
}

void get_imgprefix(std::string &dst, char *p)
{
    for (int i = 0;; i++)
    {
        if (p[i] == '.')
            return;
        else
        {
            dst.push_back(p[i]);
        }
    }
}

int main(int argc, char **argv, char **env)
{
    mem = new pmem();
    std::string img_prefix;

    get_imgprefix(img_prefix, argv[argc - 2]);
    mem->read_img(img_prefix.append(".bin").c_str());

    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);
    tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("logs/vlt_dump.vcd");
    tfp->dumpvars(1, "top");

    welcome();
    init_disasm("riscv64-pc-linux-gnu");
    init_ftrace(img_prefix.erase(img_prefix.find(".bin"), 4).append(".elf").c_str());

    reset(2);

    printf("\n\t\t ======== Reset Finished ========\n");

    // Main loop
    npc_s.state = NPC_RUNNING;
    sdb_mainloop();

    disp_ringbuf();

    top->final();
    tfp->close();

    delete mem;

    if (npc_s.state != NPC_STOP)
        printf("\033[32;1;4mNPC exit with code : %d\033[0m\n", npc_s.state);
    else
        printf("\033[1;31mNPC exit with code : %d\033[0m\n", npc_s.state);
    return npc_s.state;
}
