/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include <cpu/difftest.h>
#include <isa.h>

#include "utils.h"
#define NOTIMPLEMENT 0

#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc)  // TODO:
{
    for (int i = 0; i < 32; ++i)
    {
        if (cpu.gpr[i] != ref_r->gpr[i])
        {
            printf("\nDifftest found register name: %s is %s!\n", reg_name(i, NOTIMPLEMENT), ANSI_FMT("WRONG", ANSI_FG_RED));
            printf(ANSI_FMT("decimal : %14ld hex : %lx\n", ANSI_FG_RED), cpu.gpr[i], cpu.gpr[i]);
            printf(ANSI_FMT("decimal : %14ld hex : %lx\n\n", ANSI_FG_GREEN), ref_r->gpr[i], ref_r->gpr[i]);
            return false;
        }
    }
    return true;
}

void isa_difftest_attach()
{
}
