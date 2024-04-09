#include "Slist.h"

void test1()
{
	SL* Singlelist = NULL;
	pushback(&Singlelist, 1);
	pushback(&Singlelist, 2);
	pushback(&Singlelist, 3);
	pushback(&Singlelist, 4);
	pushfront(&Singlelist, 5);
	pushfront(&Singlelist, 6);
	pushfront(&Singlelist, 7);
	printf("一开始:");
	printlist(Singlelist);
	findlist(Singlelist, 7);
	popback(&Singlelist);
	printf("尾删:");
	printlist(Singlelist);
	printf("头删:");
	popfront(&Singlelist);
	printlist(Singlelist);
	printf("修改后:");
	modifylist(&Singlelist, 3, 3);
	printlist(Singlelist);
	printf("插入:");
	insertlist(&Singlelist, 3, 5);
	printlist(Singlelist);
	findlist(Singlelist, 7);
	return;
}

void test2()
{
	SL* Singlelist = NULL;
	pushback(&Singlelist, 1);
	printlist(Singlelist);
	popfront(&Singlelist);
	printlist(Singlelist);
}

void main()
{
	test1();
}