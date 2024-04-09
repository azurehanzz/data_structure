#pragma once
//单向链表,增删查改插
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

//购买一个动态内存空间
SL* buynode();
//尾插
void pushback(SL** head,datatype input);
//打印链表
void printlist(SL* head);
//头插
void pushfront(SL** head, datatype input);
//尾删
void popback(SL** head);
//头删
void popfront(SL** head);
//查找
SL* findlist(SL* head, datatype input);
//改
void modifylist(SL** head, int location, datatype input);
//插入
void insertlist(SL** head, int location, datatype input);