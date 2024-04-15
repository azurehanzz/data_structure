#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define datatype int
typedef struct ListNode
{
	datatype x;
	struct ListNode* next;
}LN;

typedef struct Queue
{
	LN* head;
	LN* tail;
}Queue;
void Queueinit(Queue* input);
void Queuepush(Queue* input,datatype y);
void Queuepop(Queue* input);
void Queueprint(Queue* input);
int Queuesize(Queue* input);