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


//二叉树前序遍历
void PreOrder(TREE* root);
// 二叉树中序遍历
void InOrder(TREE* root);
// 二叉树后序遍历
void PostOrder(TREE* root);
// 二叉树节点个数
int BinaryTreeSize(TREE* root);