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

//��ʼ��ջ
void stackinit(stack* input);
//��ջ
void stackpush(stack* input, datatype y);
//��ӡջ
void stackprint(stack* input);
//��ջ
void stackpop(stack* input);
//�����Ƿ�Ϊ��
