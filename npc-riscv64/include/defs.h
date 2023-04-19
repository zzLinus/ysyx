#ifndef __NPC_DEFS_H__
#define __NPC_DEFS_H__

#include <cstdint>
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define INST_NUM     14

typedef uint64_t paddr_t;

#define PMEM_LEFT    ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT   ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

#endif
