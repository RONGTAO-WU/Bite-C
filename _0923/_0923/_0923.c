#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


//	将一个字符串str的内容颠倒过来，并输出。



//void Str(char *arr)
//{
//	int sz = strlen(arr);
//	char* a = arr;									// 数组名是数组首元素的地址
//
//	while (*a)
//	{
//		printf("%c", *a);
//		a++;
//	}
//
//	char* p = &arr[sz - 1];							// &数组名是表示整个数组
//
//	printf("\n");
//	while (sz-- > 0)
//	{
//		printf("%c", *p);
//		p--;
//	}
//
//}
//
//int main()
//{
//	char arr[100] = {0};
//
//	gets(arr);
//
//	Str(arr);
//
//	return 0;
//}







//	模拟实现库函数strlen



int Str(char *arr)
{

	int count = 0;

	while (*arr)
	{
		arr++;
		count++;
	}
	
	return count;

}

int main()
{
	char arr[100] = { 0 };
	gets(arr);										// gets用来输入一串字符串


	int sz = Str(arr);

	printf("%d", sz);

	return 0;
}







//	调整数组使奇数全部都位于偶数前面。

//	输入一个整数数组，实现一个函数，
//	来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//	所有偶数位于数组的后半部分。

//void Arr(int* arr1, int* arr2)
//{
//	int j = 0;
//	int k = 0;
//	for (int i = 0; i < 10; i++)
//	{
//
//		if (arr1[i] % 2 == 0)
//		{
//			arr2[k] = arr1[i];
//			k++;
//		}
//		else
//		{
//			arr1[j] = arr1[i];
//			j++;
//		}
//	}
//
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	printf("%d %d\n", *arr1++, *arr2++);
//	//}
//
//	int* p = &arr1[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		*p++ = *arr2++;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *arr1++);
//	}
//
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	Arr(arr1, arr2);
//
//
//
//	return 0;
//}