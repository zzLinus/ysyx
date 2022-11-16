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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
	int NO;
	struct watchpoint *next;

	/* TODO: Add more members if necessary */
	char var_name[16];
	uint64_t value;
} WP;

static WP wp_pool[NR_WP] = {}; // allocate stright on stack
static WP *head = NULL, *free_ = NULL;

WP *new_wp();
void free_wp(WP *wp);

void init_wp_pool()
{
	int i;
	for (i = 0; i < NR_WP; i++) {
		wp_pool[i].NO = i;
		wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
		strcpy(wp_pool[i].var_name, "");
		wp_pool[i].value = 0;
	}

	head = NULL;
	free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

void create_wp(char *args, bool *success)
{
	memmove(args, args + 1, strlen(args) - 1);
	eval_reg(args);
	printf("create watch point\n");
}

WP *new_wp()
{
	assert(free_->next != NULL); // check if there is no enough watch point
	WP *tmp = free_;
	if (head == NULL)
		head = tmp;
	else
		head->next = tmp;
	free_ = free_->next;
	return tmp;
}

void free_wp(WP *wp)
{
	wp->next = free_;
	free_ = wp;
}
