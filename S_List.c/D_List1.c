#include "D_LIst.h"
DL* buystorage()
{
	DL* temp = (DL*)malloc(sizeof(DL));
	return temp;
}
void init(DL** head)
{
	DL* temp = buystorage();
	temp->next = temp;
	temp->pre = temp;
	*head = temp;
}
void printDL(DL* head)
{
	DL* temp = head;
	printf("HEAD -> ");
	while (head->next != temp)
	{
		head = head->next;
		printf("%d -> ", head->x);
	}
	printf("HEAD\n");
}
const DL* findpos(const DL* head, int pos)
{
	int count = 1;
	DL* temp = head;
	while (count < pos)
	{
		count++;
		temp = temp->next;
	}
	return temp;
}
const void insert(DL*pos, datatype input)
{
	DL* temp = buystorage();
	temp->x = input;
	DL* pre = pos->pre;
	pre->next = temp;
	temp->next = pos;
	pos->pre = temp;
	temp->pre = pre;
}
void pushfront(DL* head, datatype input)
{
	insert(head->next, input);
}
void pushback(DL* head, datatype input)
{
	insert(head, input);
}
const void erase(DL* pos)
{
	if (pos->next = pos)
	{
		printf("没有任何数据,请先输入数据");
		return;
	}
	DL* temppre = pos->pre;
	DL* tempnext = pos->next;
	temppre->next = tempnext;
	free(pos);
	pos = NULL;
}
void popfront(DL*head)
{
	erase(head->next);
}
void popback(DL* head)
{
	erase(head->pre);
}
void insertpos(DL* head, int pos,datatype input)
{
	DL* findedpos = findpos(head, pos+1);
	insert(findedpos, input);
}
DL* findlist(const DL* head, datatype input)
{
	DL* temp = head;
	while (temp->next != head)
	{
		temp = temp->next;
		if (input == temp->x)
		{
			printf("输入的%d找到了\n",input);
			return temp;
		}
	}
	printf("输入的%d没找到\n",input);
	return NULL;
}
void modifylist(DL* head, int pos , datatype input)
{
	DL* findedpos = findpos(head, pos + 1);
	findedpos->x = input;
}