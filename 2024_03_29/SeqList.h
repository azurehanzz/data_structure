//˳�����ݱ�
// ���ͷɾ\ͷ��\βɾ\β��\�Զ���λ��ɾ������\����\�޸�\��ʾ
//�ڴ���ö�̬�ڴ濪��
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
	datatype* data; //��̬�ڴ��׵�ַ
	int sz;  //ʵ�ʴ洢���ݴ�С
	int capacity;  //���ݱ�����
}SL;
//˳����ʼ��
void seqlist_init(SL* seqlist);
//˳����ӡ
void seqlist_Print(SL* seqlist);
//��̬�ڴ�ռ���
void seqlist_capacity_check(SL* seqlist);
//˳�������λ��
int seqlist_location(SL* seqlist);
//ѡ��λ�ò���ֵ
void seqlist_insert(SL* seqlist, int input, datatype value);
//ǰ�����
void seqlist_front_push(SL* seqlist,datatype value);
//�������
void seqlist_back_push(SL* seqlist, datatype value);
//ѡ��λ��ɾ��ֵ
void seqlist_erase(SL* seqlist, int input);
//ǰ��ɾ��
void seqlist_front_pop(SL* seqlist);
//����ɾ��
void seqlist_back_pop(SL* seqlist);
//����ֵ
int seqlist_search(SL* seqlist,datatype value);
//�޸�ֵ
void seqlist_modify(SL* seqlist,int location, datatype value);
//���ٶ�̬�ڴ�
void seqlist_destory(SL* seqlist);