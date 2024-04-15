#include "Queue.h"

void test1()
{
	Queue A;
	Queueinit(&A);
	Queuepush(&A, 1);
	Queuepush(&A, 4);
	Queuepush(&A, 3);
	Queuepush(&A, 2);
	Queueprint(&A);
	Queuepop(&A);
	Queuepop(&A);
	Queuepop(&A);
	Queuepop(&A);
	Queuepush(&A, 2);
	Queueprint(&A);
	printf("%d",Queuesize(&A));
}


void main()
{
	test1();
}