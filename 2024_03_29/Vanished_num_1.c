//��ʧ�����֣�ʱ�临�Ӷ�O(N)���ҵ���ʧ������
//
#include <stdio.h>

void main()
{
	int arr[] = { 0,6,2,8,4,5,1,3 };
	int i;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret1 = 0;
	int ret2 = 0;
	for (i = 0; i<sz; i ++)
	{
		ret1 = arr[i] + ret1;
		ret2 = i + 1 + ret2;
	}
	printf("���˵�������:%d", ret2 - ret1);

}