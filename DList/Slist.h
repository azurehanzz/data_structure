#pragma once
//��������,��ɾ��Ĳ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define datatype int
typedef struct Single_list
{
	datatype x;
	struct SL* next;
}SL;

//����һ����̬�ڴ�ռ�
SL* buynode();
//β��
void pushback(SL** head,datatype input);
//��ӡ����
void printlist(SL* head);
//ͷ��
void pushfront(SL** head, datatype input);
//βɾ
void popback(SL** head);
//ͷɾ
void popfront(SL** head);
//����
SL* findlist(SL* head, datatype input);
//��
void modifylist(SL** head, int location, datatype input);
//����
void insertlist(SL** head, int location, datatype input);