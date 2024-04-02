//消失的数字，时间复杂度O(N)内找到消失的数字
//方法二累积异或

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
	printf("消失的数字为%d", x);
}