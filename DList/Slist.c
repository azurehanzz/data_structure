#include "Slist.h"

SL* buynode()
{
	SL*temp = (SL*)malloc(sizeof(SL));
	if (temp == NULL)
	{
		perror("buynode:");
	}
	return temp;
}
void pushback(SL** head,datatype input)
{
	SL* temp = buynode();
	temp->x = input;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head  = temp;
	}
	else
	{
		SL* tail = *head;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = temp;
	}
}
void printlist(SL* head)
{
	if (head == NULL)
	{
		printf("NULL");
		printf("\n");
		return;
	}
	while (head->next)
	{
		printf("%d --> ", head->x);
		head = head->next;
	}
	printf("%d --> ", head->x);
	printf("NULL");
	printf("\n");
}
void pushfront(SL** head, datatype input)
{
	if (*head == NULL)
	{
		SL* temp = buynode();
		temp->x = input;
		temp->next = NULL;
		*head = temp;
	}
	SL* temp = buynode();
	temp->x = input;
	temp->next = *head;
	*head = temp;
}
void popback(SL** head)
{
	if (*head == NULL)
	{
		printf("Ŀǰû����������,���������ݺ��ٽ���ɾ��\n");
		return;
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}
	SL* pre = NULL;
	SL* tail = *head;
	while (tail->next)
	{
		pre = tail;
		tail = tail->next;
	}
	pre->next = NULL;
	free(tail);
	tail = NULL;
} 
void popfront(SL** head)
{
	if (*head == NULL)
	{
		printf("Ŀǰû����Ҫɾ��������,��������\n");
		return;
	}
	SL* temp;
	temp = (*head)->next;
	free(*head);
	*head = temp;
}
SL* findlist(SL* head, datatype input)
{
	SL* tail = head;
	while (tail->next == NULL)
	{
		if (tail->x == input)
		{
			printf("�ҵ���\n");
			return tail;
		}
		tail = tail->next;
	}
	//�ж����һ������
	if (tail->x == input)
	{
		printf("�ҵ���\n");
		return tail;
	}
	printf("û�ҵ�����");
}
void modifylist(SL** head, int location, datatype input)
{
	int count = 1;
	SL* tail = *head;
	while (count < location)
	{
		tail = tail->next;
		count++;
	}
	tail->x = input;
}
void insertlist(SL** head, int location, datatype input)
{
	SL* newnode = buynode();
	newnode->x = input;
	if (*head == NULL)
	{
		SL* temp = buynode();
		temp->x = input;
		temp->next = NULL;
		*head = temp;
		return;
	}
	if (location == 1)
	{
		newnode->next = *head;
		return;
	}
	int count = 1;
	SL* pre = NULL;
	SL* tail = *head;
	while (count < location)
	{
		pre = tail;
		tail = tail->next;
		count++;
	}
	pre->next = newnode;
	newnode->next = tail;
}