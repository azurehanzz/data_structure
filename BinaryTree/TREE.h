#pragma once
#include <stdio.h>
#include <stdlib.h>

#define datatype int
typedef struct TREE
{
	struct TREE* LEFT;
	struct TREE* RIGHT;
	datatype data;
}TREE;


//������ǰ�����
void PreOrder(TREE* root);
// �������������
void InOrder(TREE* root);
// �������������
void PostOrder(TREE* root);
// �������ڵ����
int BinaryTreeSize(TREE* root);