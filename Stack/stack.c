#include "stack.h"
//��ʼ��ջ
void stackinit(stack* input)
{
	datatype* temp = (datatype*)malloc(sizeof(datatype) * 4);
	if (temp == NULL)
	{
		perror("stackinit:");
	}
	input->x = temp;
	input->capacity = sizeof(datatype) * 4;
	input->top = 0;
}
//��ջ
void stackpush(stack* input, datatype y)
{
	if (input->top + 1 == input->capacity)
	{
		datatype* temp = realloc(input->x,(input->capacity) * 2);
		input->capacity *= 2;
		if (temp == NULL)
		{
			perror("stackpush:");
		}
		input->x = temp;
	}
	input->x[input->top] = y;
	input->top++;
}
//��ӡջ
void stackprint(stack* input)
{
	assert(input);
	int i = input->top-1;
	while (i >= 0)
	{
		printf("%d", input->x[i]);
		i--;
	}
	printf("\n");
}
//��ջ
void stackpop(stack* input)
{
	assert(input);
	input->top--;
}
