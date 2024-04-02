//给定一个数组,将数组内的元素向右移动k个位置 空间复杂度为O(1)
//方法:采用三步翻转法
#include <stdio.h>

void reverse_arr(int* reverse_arr, int reverse_num)
{
	int left = 0;
	int right = reverse_num - 1;
	int temp;
	while (left < right)
	{
		temp = reverse_arr[left];
		reverse_arr[left] = reverse_arr[right];
		reverse_arr[right] = temp;
		left++;
		right--;
	}
}

void rotate_arr(int* a1, int b1, int c1)
{
	c1 = c1 % b1;
	reverse_arr(a1, b1 - c1);
	reverse_arr(a1+ b1 - c1, c1);
	reverse_arr(a1, b1);
}

void print(int* arr_print,int arr_sz)
{
	int i;
	for (i = 0; i < arr_sz; i++)
	{
		printf("%d", arr_print[i]);
	}
	printf("\n");
}
void main()
{
	int arr[] = { 0,1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	rotate_arr(arr,sz,3);
	print(arr, sz);
}