#include "TREE.h"

void main()
{
	TREE* A = (TREE*)malloc(sizeof(TREE));
	TREE* B = (TREE*)malloc(sizeof(TREE));
	TREE* C = (TREE*)malloc(sizeof(TREE));
	TREE* D = (TREE*)malloc(sizeof(TREE));
	TREE* E = (TREE*)malloc(sizeof(TREE));
	A->data = 1;
	A->LEFT = B;
	A->RIGHT = C;
	B->data = 2;
	B->LEFT = NULL;
	B->RIGHT = NULL;
	C->data = 3;
	C->LEFT = D;
	C->RIGHT = E;
	D->data = 4;
	D->LEFT = NULL;
	D->RIGHT = NULL;
	E->data = 5;
	E->LEFT = NULL;
	E->RIGHT = NULL;
	printf("ǰ�����Ϊ:\n");
	PreOrder(A);
	printf("�������Ϊ:\n");
	InOrder(A);
	printf("�������Ϊ:\n");
	PostOrder(A);
	printf("���Ľڵ����Ϊ:");
	printf("%d\n", BinaryTreeSize(A));
}