//��ʧ�����֣�ʱ�临�Ӷ�O(N)���ҵ���ʧ������
//�������ۻ����

#include <stdio.h>
void main()
{
	int arr[] = { 0,6,2,8,4,5,1,3 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	for (i = 0; i < sz; i++)
	{
		x ^= arr[i];
	}
	for (i = 0; i < sz + 1; i++)
	{
		x ^= i;
	}
	printf("��ʧ������Ϊ%d", x);
}