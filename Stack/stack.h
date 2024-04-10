#pragma once
//Start Time:07:39
//finished:
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define datatype int

typedef struct stack
{
	datatype* x;
	int top;
	int capacity;
}stack;

//初始化栈
void stackinit(stack* input);
//进栈
void stackpush(stack* input, datatype y);
//打印栈
void stackprint(stack* input);
//出栈
void stackpop(stack* input);
//检验是否为空
