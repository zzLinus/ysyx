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

#include <isa.h>
#include "local-include/reg.h"
#define NOTIMPLEMENT 0

// clang-format off
const char *regs[] = { // cpu_gpr[32]
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
// clang-format on

void isa_reg_display()
{
	for (int i = 0; i < 31; i++) {
		printf("register name: %s value: %lu \n", reg_name(i, NOTIMPLEMENT), cpu.gpr[i]);
	}
}

word_t isa_reg_str2val(const char *s, bool *success)
{
	word_t reg_val;
	for (int i = 0; i < 31; i++) {
		if (strcmp(s, reg_name(i, NOTIMPLEMENT)) == 0) {
			reg_val = cpu.gpr[i];
			*success = true;
		}
	}
	return reg_val;
}
