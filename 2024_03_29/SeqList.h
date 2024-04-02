//顺序数据表
// 完成头删\头插\尾删\尾插\自定义位置删除插入\搜索\修改\显示
//内存采用动态内存开辟
#define _CRT_SECURE_NO_WARNINGS
#ifndef __SEQLIST__H__
#define __SEQLIST__H__
#endif
#define datatype int
#define datashow "%-3d "
#define datainput "%d"
#include <stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
typedef struct Seqlist
{
	datatype* data; //动态内存首地址
	int sz;  //实际存储数据大小
	int capacity;  //数据表容量
}SL;
//顺序表初始化
void seqlist_init(SL* seqlist);
//顺序表打印
void seqlist_Print(SL* seqlist);
//动态内存空间检查
void seqlist_capacity_check(SL* seqlist);
//顺序表插入的位置
int seqlist_location(SL* seqlist);
//选定位置插入值
void seqlist_insert(SL* seqlist, int input, datatype value);
//前向插入
void seqlist_front_push(SL* seqlist,datatype value);
//后向插入
void seqlist_back_push(SL* seqlist, datatype value);
//选定位置删除值
void seqlist_erase(SL* seqlist, int input);
//前向删除
void seqlist_front_pop(SL* seqlist);
//后向删除
void seqlist_back_pop(SL* seqlist);
//搜索值
int seqlist_search(SL* seqlist,datatype value);
//修改值
void seqlist_modify(SL* seqlist,int location, datatype value);
//销毁动态内存
void seqlist_destory(SL* seqlist);