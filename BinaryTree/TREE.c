#include "TREE.h"

//二叉树前序遍历
void PreOrder(TREE* root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%d\n", root->data);
	PreOrder(root->LEFT);
	PreOrder(root->RIGHT);
	return;
}
// 二叉树中序遍历
void InOrder(TREE* root)
{
	if (root == NULL)
	{
		return;
	}
	InOrder(root->LEFT);
	printf("%d\n", root->data);
	InOrder(root->RIGHT);
	return;
}
// 二叉树后序遍历
void PostOrder(TREE* root)
{
	if (root == NULL)
	{
		return;
	}
	PostOrder(root ->LEFT );
	PostOrder(root->RIGHT);
	printf("%d\n", root->data);
}
// 二叉树节点个数
int BinaryTreeSize(TREE* root)
{
	return root == NULL ? 0 : BinaryTreeSize(root->LEFT) + BinaryTreeSize(root->RIGHT) + 1;
}
