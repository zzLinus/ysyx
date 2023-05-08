#ifndef __NPC_DEFS_H__
#define __NPC_DEFS_H__

#include <cstdint>
#define CONFIG_MBASE           0x80000000
#define CONFIG_MSIZE           0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define INST_NUM               14

typedef uint64_t paddr_t;
typedef uint64_t vaddr_t;

enum
{
    NPC_END,
    NPC_STOP,
    NPC_RESETTING,
    NPC_RUNNING,
    NPC_ABORT,
    NPC_QUIT
};

typedef struct
{
    int state;
    vaddr_t halt_pc;
    uint32_t halt_ret;
} NPCState;

#define PMEM_LEFT    ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT   ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

#define _str(x) #x

#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD      ARRLEN(cmd_table)

#define CHECKASCII(byte)             ((byte) >= 33 && (byte) <= 126) ? byte : '.'
#define HEXTOCHAR(arg1, len, sftamt) (uint8_t)(paddr_read(arg1, len) >> (sftamt))

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

#define IF_NPC_S_EXIT(s)        \
    do                          \
    {                           \
        if (npc_s.state == (s)) \
        {                       \
            is_halt = true;     \
            return;             \
        }                       \
                                \
    } while (0)

#endif
