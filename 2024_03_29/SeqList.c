#include "SeqList.h"

void seqlist_init(SL* seqlist)
{
	datatype* temp = (datatype*)malloc(sizeof(datatype) * 5);
	if (temp == NULL)
	{
		perror("seqlist_init:");
		return;
	}
	seqlist->data = temp;
	seqlist->sz = 0;
	seqlist->capacity = 5;
}
void seqlist_Print(const SL* seqlist)
{
	int start;
	printf("Index:");
	for (start = 0; start < seqlist->sz; start++)
	{
		printf(datashow, start + 1);
	}
	printf("\n");
	printf("Value:");
	for (start = 0; start < seqlist->sz; start++)
	{
		printf(datashow, seqlist->data[start]);
	}
	printf("\n");
}
void seqlist_capacity_check(SL* seqlist)
{
	if (seqlist->sz == seqlist->capacity)
	{
		seqlist->capacity *= 2;
		datatype* temp = (datatype*)(realloc(seqlist->data,seqlist->capacity*sizeof(datatype)));
		if (temp == NULL)
		{
			perror("realloc:");
			return;
		}
		seqlist->data = temp;
	}
}
int seqlist_location(SL* seqlist)
{
	int input;
	seqlist_Print(seqlist);
	do
	{
		printf("请输入位置:");
		scanf("%d", &input);
		if (input<0 || input > seqlist->sz)
		{
			printf("输入越界\n");
			return 0;
		}
	} while (input<0 || input > seqlist->sz);
	return input;
}
void seqlist_insert(SL* seqlist,int input,datatype value)
{
	seqlist_capacity_check(seqlist);
	int end;
	for (end = seqlist->sz ; end >= input; end--)
	{
		seqlist->data[end] = seqlist->data[end-1];
	}
	seqlist->data[input] = value;
	seqlist->sz++;
}
void seqlist_front_push(SL* seqlist,datatype value)
{
	seqlist_insert(seqlist, 0, value);
}
void seqlist_back_push(SL* seqlist, datatype value)
{
	seqlist_insert(seqlist, seqlist->sz, value);
}
void seqlist_erase(SL* seqlist, int input)
{
	int start;
	for (start = input; start < seqlist->sz; start++)
	{
		seqlist->data[start - 1] = seqlist->data[start];
	}
	seqlist->sz--;
}
void seqlist_front_pop(SL* seqlist)
{
	seqlist_erase(seqlist, 1);
}
void seqlist_back_pop(SL* seqlist)
{
	seqlist_erase(seqlist, seqlist->sz);
}
int seqlist_search(const SL* seqlist, datatype value)
{
	int index;
	for (index = 0; index < seqlist->sz; index++)
	{
		if (seqlist->data[index] == value)
		{
			return index;
		}
	}
	printf("value doesn't exist");
	return -1;
}
void seqlist_modify(SL* seqlist, int location, datatype value)
{
	seqlist->data[location-1] = value;
}
void seqlist_destory(SL* seqlist)
{
	free(seqlist->data);
	seqlist->data = NULL;
}