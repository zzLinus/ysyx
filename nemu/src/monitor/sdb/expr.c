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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
	TK_NOTYPE = 256,
	TK_EQ,

	/* TODO: Add more token types */
	TK_NUM,
	TK_HEX,
	TK_REG,
};

static struct rule {
	const char *regex;
	int token_type;
} rules[] = {

	/* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

	{ " +", TK_NOTYPE }, // spaces
	{ "\\+", '+' }, // plus
	{ "\\-", '-' }, // sub
	{ "\\*", '*' }, // mult
	{ "\\/", '/' }, // mult
	{ "\\(", '(' }, // left breck
	{ "\\)", ')' }, // right breck
	{ "==", TK_EQ }, // equal
	{ "[0-9]+", TK_NUM }, // number
	{ "\\$[a-zA-Z0-9]+", TK_REG }, // number
	{ "0[xX][0-9a-fA-F]+", TK_HEX }, // number
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

bool check_parentheses(int p, int q);
word_t eval(int p, int q);
uint32_t get_opt(int p, int q);
void eval_reg(void);

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex()
{
	int i;
	char error_msg[128];
	int ret;

	for (i = 0; i < NR_REGEX; i++) {
		/* regcomp() is used to compile a regular expression into a form that is suitable for subsequent regexec() searches. */
		ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
		if (ret != 0) {
			regerror(ret, &re[i], error_msg, 128);
			panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
		}
	}
}

typedef struct token {
	int type;
	char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used)) = 0;

static bool make_token(char *e)
{
	int position = 0;
	int i;
	regmatch_t pmatch;
	nr_token = 0;

	while (e[position] != '\0') { // iterate every possible substring
		/* Try all rules one by one. */
		for (i = 0; i < NR_REGEX; i++) {
			if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
				char *substr_start = e + position;
				int substr_len = pmatch.rm_eo;

				Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s", i, rules[i].regex,
				    position, substr_len, substr_len, substr_start);

				position += substr_len;

				/* TODO: Now a new token is recognized with rules[i]. Add codes
				 * to record the token in the array `tokens'. For certain types
				 * of tokens, some extra actions should be performed.
				 */

				switch (rules[i].token_type) {
				case TK_EQ:
					break;
				case TK_NUM:
					tokens[nr_token].type = TK_NUM;
					strncpy(tokens[nr_token++].str, substr_start, substr_len);
					break;
				case TK_NOTYPE:
					break;
				case '+':
					tokens[nr_token].type = '+';
					strcpy(tokens[nr_token++].str, "");
					break;
				case '-':
					tokens[nr_token].type = '-';
					strcpy(tokens[nr_token++].str, "");
					break;
				case '*':
					tokens[nr_token].type = '*';
					strcpy(tokens[nr_token++].str, "");
					break;
				case '/':
					tokens[nr_token].type = '/';
					strcpy(tokens[nr_token++].str, "");
					break;
				case '(':
					tokens[nr_token].type = '(';
					strcpy(tokens[nr_token++].str, "");
					break;
				case TK_REG:
					tokens[nr_token].type = TK_REG;
					// remove the '$' sign
					strncpy(tokens[nr_token++].str, substr_start + 1, substr_len - 1);
					break;
				case TK_HEX:
					break;
				case ')':
					tokens[nr_token].type = ')';
					strcpy(tokens[nr_token++].str, "");
					break;
				default:
					TODO();
				}

				break;
			}
		}

		if (i == NR_REGEX - 1) {
			position++;
		}
	}

	return true;
}

word_t expr(char *e, bool *success)
{
	if (!make_token(e)) {
		*success = false;
		return 0;
	}

	eval_reg();

	int res = eval(0, nr_token - 1);
	printf("result : %d\n", res);

	return 0;
}

word_t eval(int p, int q)
{
	if (p > q) {
		/* Bad expression */
	} else if (p == q) {
		return (word_t)atoi(tokens[p].str);
	} else if (check_parentheses(p, q) == true) {
		/* The expression is surrounded by a matched pair of parentheses.
		 * If that is the case, just throw away the parentheses.
		 */
		return eval(p + 1, q - 1);
	} else {
		int op = get_opt(p, q);
		printf("op is %d\n", op);
		int val1 = eval(p, op - 1);
		int val2 = eval(op + 1, q);

		switch (tokens[op].type) {
		case '+':
			return val1 + val2;
		case '-':
			return val1 - val2;
		case '*':
			return val1 * val2;
		case '/':
			return val1 / val2;
		default:
			assert(0);
		}
	}
	return -1;
}

bool check_parentheses(int p, int q)
{
	int arr[32] = { 0 };
	int count = 0, sum = 0;
	for (int i = p; i <= q; i++) {
		if (tokens[i].type == '(')
			arr[count++] = 1;
		else if (tokens[i].type == ')')
			arr[count++] = -1;
	}
	for (int i = 0; i < count; i++) {
		sum += arr[i];
	}
	if (sum != 0) {
		panic("Bad expression");
		return false;
	}
	if (tokens[p].type == '(' && tokens[q].type == ')') {
		sum = 0;
		for (int i = 0; i < count; i++) {
			sum += arr[i];
			if (sum == 0 && i != count - 1)
				return false;
		}
		return true;
	} else
		return false;
	return false;
}

void eval_reg(void)
{
	for (int i = 0; i < nr_token; i++) {
		if (tokens[i].type == TK_REG) {
			bool success = false;
			char num[32];
			int tmp = isa_reg_str2val(tokens[i].str, &success);
			printf("reg name :%s\n", tokens[i].str);
			if (!success)
				panic("Read register failed, may be the wrong reg name.");
			tokens[i].type = TK_NUM;
			sprintf(num, "%d", tmp);
			strcpy(tokens[i].str, num);
		}
	}
}

uint32_t get_opt(int p, int q)
{
	bool stop = false;
	uint32_t res = -1, pri = 1;
	for (int i = p; i <= q; i++) {
		if (tokens[i].type == '(')
			stop = true;
		else if (tokens[i].type == ')')
			stop = false;
		if (!stop) {
			switch (tokens[i].type) {
			case '*':
				if (pri == 1)
					res = i;
				break;
			case '/':
				if (pri == 1)
					res = i;
				break;
			case '+':
				pri = 2;
				res = i;
				break;
			case '-':
				pri = 2;
				res = i;
				break;
			}
		}
	}
	if (res != -1)
		return res;
	else
		return -1;
}
