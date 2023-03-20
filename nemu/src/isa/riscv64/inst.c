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
    TYPE_R,
    TYPE_I,
    TYPE_S,
    TYPE_B,
    TYPE_U,
    TYPE_J,
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
// NOTE:The jump and link (JAL) instruction uses the J-type format, where the J-immediate encodes a signed offset in
// multiples of 2 bytes.
// 1004bc
#define immJ()                                                                                                         \
    do                                                                                                                 \
    {                                                                                                                  \
        *imm = (SEXT(BITS(i, 31, 31), 1) << 19) | (BITS(i, 19, 12) << 11) | (BITS(i, 20, 20) << 10) | BITS(i, 30, 21); \
        *imm = *imm << 1;                                                                                              \
    } while (0)
#define immB()                                                                                                     \
    do                                                                                                             \
    {                                                                                                              \
        *imm = (SEXT(BITS(i, 31, 31), 1) << 11) | (BITS(i, 7, 7) << 10) | (BITS(i, 30, 25) << 4) | BITS(i, 11, 8); \
        *imm = *imm << 1;                                                                                          \
    } while (0)
// INFO : why if i do SEXT(BITS(i, 11, 8), 4) it will overflow but BITS(i, 11, 8) is normal

#ifdef CONFIG_FTRACE
uint8_t call_ret = 0;
#define RET(addr)  call_ret = 1 << 2;
#define CALL(addr) call_ret = 1 << 1;
#endif

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
        case TYPE_B:
            src1R();
            src2R();
            immB();
            break;
        case TYPE_U: immU(); break;
        case TYPE_R:
            src1R();
            src2R();
            break;
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
    // 8000008c:	00042583          	lw	a1,0(s0)
    //       0000000 00000 01000 010 01011 00000 11
    INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw, I, R(dest) = SEXT(Mr(src1 + imm, 4), 32));
    INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu, I, R(dest) = (uint8_t)Mr(src1 + imm, 1));
    INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw, R, R(dest) = SEXT(src1 - src2, 32));
    INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw, R, R(dest) = SEXT(src1 + src2, 32));
    INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw, R, R(dest) = SEXT(src1 % src2, 32));

    INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw, R, R(dest) = SEXT(src1, 32) / SEXT(src2, 32));
    INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori, I, R(dest) = src1 ^ imm);
    INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub, R, R(dest) = src1 - src2);
    INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add, R, R(dest) = src1 + src2);
    INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or, R, R(dest) = src1 | src2);
    INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi, I, R(dest) = src1 & imm);
    INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and, R, R(dest) = src1 & src2);

    // branch instruction
    INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq, B, s->dnpc = (src1 == src2) ? s->pc + imm : s->snpc);
    INSTPAT("??????? ????? ????? 001 ????? 11000 11", bnez, B, s->dnpc = (src1 != src2) ? s->pc + imm : s->snpc);
    INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu, B, s->dnpc = (src1 < (unsigned)src2) ? s->pc + imm : s->snpc);
    INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge, B, s->dnpc = (src1 >= src2) ? s->pc + imm : s->snpc);
    INSTPAT("??????? ????? ????? 100 ????? 01101 11", lui, U, R(dest) = imm);
    INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu, B, s->dnpc = (src1 >= (unsigned)src2) ? s->pc + imm : s->snpc);
    INSTPAT("??????? ????? ????? 100 ????? 11000 11", bltz, B, s->dnpc = (src1 < src2) ? s->pc + imm : s->snpc);
    INSTPAT("0100000 ????? ????? 000 ????? 01100 11", neg, R, R(dest) = src1 - src2);
    INSTPAT("0000000 ????? ????? 010 ????? 01100 11", sgtz, R, R(dest) = (src1 < src2) ? 1 : 0);
    INSTPAT("0000000 ????? ????? 011 ????? 01100 11", snez, R, R(dest) = (src2 != src1) ? 1 : 0);

    // NOTE :JAL stores the address of the instruction following the jump (pc+4) into register rd.
    //
    // 80000264:	0ff87793          	zext.b	a5,a6
    //       0000111 11111 10000 111 01111 00100 11
    //  FIXME : according to `https://github.com/riscv/riscv-code-size-reduction/blob/main/Zc-specification/c_zext_b.adoc`
    //  zext.b should equivalent to `addi rd r1 0xff` ,but it's value always less one
    INSTPAT("??????? ????? ????? 111 ????? 00100 11", zext.b, I, R(dest) = BITS(src1, 7, 0));
    INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi, I, R(dest) = src1 + imm);
    INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw, I, R(dest) = SEXT(src1 + imm, 32));
    // 8000000c:	4bc000ef          	jal	ra,800004c8 <_trm_init>
    //   0100101 11100 00000 000 00001 11011 11
    INSTPAT(
        "??????? ????? ????? ??? ????? 11011 11", jal, J, s->dnpc = s->pc + imm; if (dest != 0) {
            R(dest) = s->snpc;

            IFDEF(CONFIG_FTRACE, CALL(s->dnpc))
        });
    // 80000088:	000b8413          	mv	s0,s7
    //       0000000 00000 10111 000 01000 00100 11
    INSTPAT("??????? 00000 ????? 000 ????? 00100 11", mv, I, R(dest) = src1 + imm);  // mv rd rs == add rd rs 0
    INSTPAT("??????? ????? ????? 101 ????? 00110 11", srliw, I, R(dest) = (int)((unsigned int)src1 >> imm));
    INSTPAT("??????? ????? ????? 101 ????? 00110 11", sraiw, I, R(dest) = (int)(src1 >> imm));
    // 8000003c:	00b797bb          	sllw	a5,a5,a1
    //       0000000 01011 01111 001 01111 01110 11
    INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw, R, R(dest) = SEXT((uint32_t)src1 << (src2 & 0b11111), 32));
    INSTPAT("??????? ????? ????? 001 ????? 00100 11", slli, I, R(dest) = src1 << imm);
    INSTPAT("??????? ????? ????? 001 ????? 00110 11", slliw, I, R(dest) = (uint32_t)src1 << imm);
    INSTPAT("??????? ????? ????? 101 ????? 00100 11", srli, I, R(dest) = src1 >> imm);

    /* NOTE : SLTI (set less than immediate) places the value 1 in register rd if register rs1 is less than the sign- */
    /* extended immediate when both are treated as signed numbers, else 0 is written to rd. SLTIU is                  */
    /* similar but compares the values as un"signed numbers (i.e., the immediate is first sign-extended to            */
    /* XLEN bits then treated as an unsigned number). Note, SLTIU rd, rs1, 1 sets rd to 1 if rs1 equals               */
    /* zero, otherwise sets rd to 0 (assembler pseudoinstruction SEQZ rd, rs).                                        */
    INSTPAT("??????? ????? ????? 011 ????? 00100 11", seqz, I, R(dest) = src1 == 0 ? imm : 0);

    INSTPAT("??????? ????? ????? ??? ????? 00100 11", li, U, R(dest) = imm);
    // 80000170:	01c0006f          	j	8000018c <sprintf+0x70>
    //       0000000 11010 00000 000 00000 11011 11
    INSTPAT("??????? ????? ????? ??? ????? 11011 11", j, J, s->dnpc = s->pc + imm; R(dest) = s->snpc);
    // 800001e8:	000780e7          	jalr	a5
    //       0000000 00000 01111 000 00001 11001 11
    // 80000098:	00078067          	jr	a5
    //       0000000 00000 01111 000 00000 11001 11
    // 800000a0:	00008067          	ret
    //       0000000 00000 00001 000 00000 11001 11
    INSTPAT(
        "??????? ????? ????? 000 ????? 11001 11", jalr / ret / jr, I, s->dnpc = src1 + imm; R(dest) = s->snpc;
        if (BITS(s->isa.inst.val, 19, 15) == 1 && dest == 0) { IFDEF(CONFIG_FTRACE, RET(s->dnpc)); } else {
            IFDEF(CONFIG_FTRACE, CALL(s->dnpc));
        });

    // FIXME : The SD, SW, SH, and SB instructions store 64 - bit, 32 - bit, 16 - bit,
    // and8 - bit values from the low bits of register rs2 to memory respectively.
    INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd, S, Mw(src1 + imm, 8, src2));
    INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw, S, Mw(src1 + imm, 4, src2));
    INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh, S, Mw(src1 + imm, 2, src2));
    INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb, S, Mw(src1 + imm, 1, src2));

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
