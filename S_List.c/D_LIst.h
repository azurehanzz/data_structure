#pragma once
//��ͷ˫��ѭ������ 
//ʵ����ɾ��Ĺ���
#include <stdio.h>
#include <stdlib.h>
#define datatype int
typedef struct Doublelist
{
	struct Doublelist* pre;
	datatype x;
	struct Singlelist* next;
}DL;
//���ݶ�̬�ڴ�
DL* buystorage();
//��ʼ����ͷ˫��ѭ������
void init(DL** head);
//��ӡ˫��ѭ������
void printDL(DL* head);
//��������ֵ
DL* findlist(const DL* head, datatype input);
//ǰ������
void pushfront(DL* head, datatype input);
//��������
void pushback(DL* head, datatype input);
//ǰ��ɾ��
void popfront(DL* head);
//����ɾ��
void popback(DL* head);
//����ָ��λ��
void insertpos(DL* head, int pos, datatype input);
//�޸�ָ��λ��
void modifylist(DL* head, int pos);