#include "Queue.h"
void Queueinit(Queue* input)
{
	input->head = NULL;
	input->tail = NULL;
}
void Queueprint(Queue* input)
{
	assert(input);
	assert(input->head);
	LN* temp = input->head;
	while (temp)
	{
		printf("%d ->", temp->x);
		temp = temp->next;
	}
	printf("NULL\n");
}
void Queuepush(Queue* input, datatype y)
{
	assert(input);
	LN* temp1 = (LN*)malloc(sizeof(LN));
	if (temp1 == NULL)
	{
		perror("Queuepush:");
	}
	temp1->x = y;
	temp1->next = NULL;
	if ((input->head==NULL) && (input->tail==NULL) )
	{
		input->head = input->tail = temp1;
		return;
	}
	input->tail->next = temp1;
	input->tail = input->tail->next;
}
void Queuepop(Queue* input)
{
	assert(input);
	assert(input->head);
	if (input->head == input->tail)
	{
		free(input->head);
		input->head = NULL;
		input->tail = NULL;
		return;
	}
	LN* temp = input->head->next;
	free(input->head);
	input->head = temp;
}
int Queuesize(Queue* input)
{
	int count = 0;
	LN* temp = input->head;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return count;
}