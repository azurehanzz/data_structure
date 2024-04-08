#include "D_LIst.h"

void test1()
{
	DL* Doublelist = NULL;
	init(&Doublelist);
	pushfront(Doublelist, 3);
	pushfront(Doublelist, 4);
	pushfront(Doublelist, 5);
	pushfront(Doublelist, 6);
	printDL(Doublelist);
	pushback(Doublelist, 3);
	pushback(Doublelist, 4);
	pushback(Doublelist, 5);
	pushback(Doublelist, 6);
	printDL(Doublelist);
	popfront(Doublelist);
	printDL(Doublelist);
	popback(Doublelist);
	printDL(Doublelist);
	insertpos(Doublelist, 3, 44);
	printDL(Doublelist);
	findlist(Doublelist, 44);
	findlist(Doublelist, 10);
	modifylist(Doublelist, 3, 1000);
	printDL(Doublelist);
}

void main()
{
	test1();
}