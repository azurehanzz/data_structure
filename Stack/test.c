#include "stack.h"

void test1()
{
	stack A;
	stackinit(&A);
	stackpush(&A, 1);
	stackpush(&A, 2);
	stackpush(&A, 3);
	stackpush(&A, 4);
	stackpush(&A, 5);
	stackprint(&A);
	stackpop(&A);
	stackpop(&A);
	stackpop(&A);
	stackprint(&A);
}


void main()
{
	test1();
}