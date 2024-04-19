#include "TREE.h"

//������ǰ�����
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
// �������������
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
// �������������
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
// �������ڵ����
int BinaryTreeSize(TREE* root)
{
	return root == NULL ? 0 : BinaryTreeSize(root->LEFT) + BinaryTreeSize(root->RIGHT) + 1;
}
