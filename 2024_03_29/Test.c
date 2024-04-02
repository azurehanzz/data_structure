#include "SeqList.h"

void menu()
{
	printf("*********************************\n");
	printf("**1.Front_ADD        2.Back_ADD**\n");
	printf("**3.Front_DEL        4.Back_DEL**\n");
	printf("**5.Modify           6.Search  **\n");
	printf("**7.Insert           8.DEL     **\n");
	printf("**9.Print            0.Exit    **\n");
	printf("*********************************\n");
}
enum Some_option
{
	Exit = 0,
	Front_ADD,
	Back_ADD,
	Front_DEL,
	Back_DEL,
	Modify,
	Search,
	Insert,
	DEL,
	Print
};

void main()
{
	SL s;
	seqlist_init(&s);
	int option;
	datatype val;
	int loca;
	do {
	menu();
	printf("请输入:");
	scanf("%d", &option);
	switch (option)
	{
	case Front_ADD:
		printf("请输入需要输入的值:");
		scanf(datainput, &val);
		seqlist_front_push(&s, val);
		break;
	case Back_ADD:
		printf("请输入需要输入的值:");
		scanf(datainput, &val);
		seqlist_back_push(&s, val);
		break;
	case Front_DEL:
		seqlist_front_pop(&s);
		break;
	case Back_DEL:
		seqlist_back_pop(&s);
		break;
	case Modify:
		loca = seqlist_location(&s);
		if(loca)
		{
			printf("请输入需要修改的值:");
			scanf(datainput, &val);
			seqlist_modify(&s, loca, val);
		}
		break;
	case Search:
		printf("请输入需要搜索的值:");
		scanf(datainput, &val);
		break;
	case Insert:
		loca = seqlist_location(&s);
		if (loca)
		{
			printf("请输入需要插入的值:");
			scanf(datainput, &val);
			seqlist_insert(&s, loca - 1, val);
		}
		break;
	case DEL:
		loca = seqlist_location(&s);
		if (loca)
		{
			seqlist_erase(&s, loca);
		}
		break;
	case Print:
		seqlist_Print(&s);
		break;
	case Exit:
		seqlist_destory(&s);
		break;
	default:
		printf("输入错误请重新输入\n");
	}
	} while (option);
	return;
}