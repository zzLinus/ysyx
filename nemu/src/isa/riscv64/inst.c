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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/ifetch.h>

#include "local-include/reg.h"

#define R(i) gpr(i)
#define Mr   vaddr_read
#define Mw   vaddr_write

enum
{
    TYPE_I,
    TYPE_U,
    TYPE_S,
    TYPE_J,
    TYPE_R,
    TYPE_N,  // none
};

#define src1R()         \
    do                  \
    {                   \
        *src1 = R(rs1); \
    } while (0)
#define src2R()         \
    do                  \
    {                   \
        *src2 = R(rs2); \
    } while (0)
#define immI()                            \
    do                                    \
    {                                     \
        *imm = SEXT(BITS(i, 31, 20), 12); \
    } while (0)
#define immU()                                  \
    do                                          \
    {                                           \
        *imm = SEXT(BITS(i, 31, 12), 20) << 12; \
    } while (0)
#define immS()                                                   \
    do                                                           \
    {                                                            \
        *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); \
    } while (0)
#define immJ()                                                                                                        \
    do                                                                                                                \
    {                                                                                                                 \
        *imm =                                                                                                        \
            ((SEXT(BITS(i, 30, 30), 1) << 19) | (SEXT(BITS(i, 19, 12), 8) << 18) | (SEXT(BITS(i, 20, 20), 1) << 10) | \
             BITS(i, 30, 21));                                                                                        \
        *imm = *imm << 1;                                                                                             \
    } while (0)
// NOTE:The jump and link (JAL) instruction uses the J-type format, where the J-immediate encodes a signed offset in
// multiples of 2 bytes.

static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type)
{
    uint32_t i = s->isa.inst.val;
    int rd = BITS(i, 11, 7);
    int rs1 = BITS(i, 19, 15);
    int rs2 = BITS(i, 24, 20);
    *dest = rd;
    switch (type)  // riscv64 4 base inst type (R I S U) 2 mutate type S->B U->J
    {
        case TYPE_I:
            src1R();  // load register 1 value to src1
            immI();   // load imm value to imm
            break;
        case TYPE_J: immJ(); break;
        case TYPE_U: immU(); break;
        case TYPE_S:
            src1R();
            src2R();
            immS();
            break;
    }
}

// No 0  : register name: $0  | dec value: 0 | hex value: 0
// No 1  : register name: ra  | dec value: 0 | hex value: 0
// No 2  : register name: sp  | dec value: 0 | hex value: 0
// No 3  : register name: gp  | dec value: 0 | hex value: 0
// No 4  : register name: tp  | dec value: 0 | hex value: 0
// No 5  : register name: t0  | dec value: 0 | hex value: 0
// No 6  : register name: t1  | dec value: 0 | hex value: 0
// No 7  : register name: t2  | dec value: 0 | hex value: 0
// No 8  : register name: s0  | dec value: 0 | hex value: 0
// No 9  : register name: s1  | dec value: 0 | hex value: 0
// No 10 : register name: a0  | dec value: 0 | hex value: 0
// No 11 : register name: a1  | dec value: 0 | hex value: 0
// No 12 : register name: a2  | dec value: 0 | hex value: 0
// No 13 : register name: a3  | dec value: 0 | hex value: 0
// No 14 : register name: a4  | dec value: 0 | hex value: 0
// No 15 : register name: a5  | dec value: 0 | hex value: 0
// No 16 : register name: a6  | dec value: 0 | hex value: 0
// No 17 : register name: a7  | dec value: 0 | hex value: 0
// No 18 : register name: s2  | dec value: 0 | hex value: 0
// No 19 : register name: s3  | dec value: 0 | hex value: 0
// No 20 : register name: s4  | dec value: 0 | hex value: 0
// No 21 : register name: s5  | dec value: 0 | hex value: 0
// No 22 : register name: s6  | dec value: 0 | hex value: 0
// No 23 : register name: s7  | dec value: 0 | hex value: 0
// No 24 : register name: s8  | dec value: 0 | hex value: 0
// No 25 : register name: s9  | dec value: 0 | hex value: 0
// No 26 : register name: s10 | dec value: 0 | hex value: 0
// No 27 : register name: s11 | dec value: 0 | hex value: 0
// No 28 : register name: t3  | dec value: 0 | hex value: 0
// No 29 : register name: t4  | dec value: 0 | hex value: 0
// No 39 : register name: t5  | dec value: 0 | hex value: 0

static int decode_exec(Decode *s)
{
    int dest = 0;
    word_t src1 = 0, src2 = 0, imm = 0;
    s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */)               \
    {                                                                      \
        decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
        __VA_ARGS__;                                                       \
    }
    INSTPAT_START();  //                            | name | type |
    INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc, U, R(dest) = s->pc + imm);
    INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld, I, R(dest) = Mr(src1 + imm, 8));
    INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu, I, R(dest) = Mr(src1 + imm, 8));
    INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw, R, R(dest) = src1 - src2);
    INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw, R, R(dest) = src1 + src2;);
    INSTPAT("??????? ????? ????? 000 ????? 11000 11", beqz, S, s->dnpc = (src1 == src2) ? s->pc + imm : s->snpc);
    INSTPAT("??????? ????? ????? 001 ????? 11000 11", bnez, S, s->dnpc = (src1 != src2) ? s->pc + imm - 1 : s->snpc);
    /* printf("pc : %lx ,imm: %ld,dnpc : %lx\n", s->pc, imm, s->dnpc)); */

    // 8000005c:	00a02533          	sgtz	a0,a0 -> slt a0, x0, a0
    //       0000000 01010 00000 010 01010 01100 11
    INSTPAT("0000000 ????? ????? 010 ????? 01100 11", sgtz, R, R(dest) = (src1 < src2) ? 1 : 0);

    INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw, I, R(dest) = (int)((unsigned int)src1 >> imm));

    // NOTE :JAL stores the address of the instruction following the jump (pc+4) into register rd.
    INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi, I, R(dest) = src1 + imm);
    INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal, J, s->dnpc = s->pc + imm; R(dest) = s->snpc);
    INSTPAT("0000000 00000 ????? 000 ????? 00100 11", mv, I, R(dest) = src1 + imm);  // mv rd rs == add rd rs 0
    INSTPAT("??????? ????? ????? 001 ????? 00100 11", slli, I, R(dest) = src1 << imm);
    INSTPAT("??????? ????? ????? ??? ????? 00100 11", li, U, R(dest) = imm);
    INSTPAT("??????? ????? ????? ??? ????? 11011 11", j, J, s->dnpc = s->pc + imm; R(dest) = s->snpc);
    INSTPAT("??????? ????? ????? 000 ????? 11001 11", ret, I, s->dnpc = src1);

    INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb, S, Mw(src1 + imm, 8, src2));
    INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd, S, Mw(src1 + imm, 8, src2));

    INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak, N, NEMUTRAP(s->pc, R(10)));  // R(10) is $a0
    INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv, N, INV(s->pc));

    INSTPAT_END();

    R(0) = 0;  // reset $zero to 0

    return 0;
}

int isa_exec_once(Decode *s)
{
    s->isa.inst.val = inst_fetch(&s->snpc, 4);
    return decode_exec(s);
}
