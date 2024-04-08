#pragma once
//带头双向循环链表 
//实现增删查改功能
#include <stdio.h>
#include <stdlib.h>
#define datatype int
typedef struct Doublelist
{
	struct Doublelist* pre;
	datatype x;
	struct Singlelist* next;
}DL;
//扩容动态内存
DL* buystorage();
//初始化带头双向循环链表
void init(DL** head);
//打印双向循环链表
void printDL(DL* head);
//查找输入值
DL* findlist(const DL* head, datatype input);
//前向输入
void pushfront(DL* head, datatype input);
//后向输入
void pushback(DL* head, datatype input);
//前向删除
void popfront(DL* head);
//后向删除
void popback(DL* head);
//插入指定位置
void insertpos(DL* head, int pos, datatype input);
//修改指定位置
void modifylist(DL* head, int pos);