#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	写一个函数打印arr数组的内容，不使用数组下标，使用指针。



//#include<string.h>
//
//void Print(char* arr)
//{
//	int sz = strlen(arr);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//
//	gets(arr);
//
//	Print(arr);
//
//	return 0;
//}







//	实现一个对整形数组的冒泡排序



//int main()
//{
//	int arr[10] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	for (int i = 0; i < 10-1; i++)
//	{
//		
//		for (int j = 0; j < 10 - i-1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}







//	写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。



#include<string.h>

char* Jud(char *arr1[], char *arr2[])
{
	char tmp[100] = { 0 };
	strcpy(tmp, arr1);
	strcat(tmp, arr1);

	return strstr(tmp, arr2);

	
}

int main()
{
	char arr1[10] = { 0 };
	char arr2[10] = { 0 };

	gets(arr1);
	gets(arr2);

	char* ret = Jud(arr1, arr2);

	//char tmp[100] = { 0 };
	//strcpy(tmp, arr1);
	//strcat(tmp, arr1);

	//char* ret = strstr(tmp, arr2);

	//if (ret != 0)
	//	return 1;
	//else
	//	return 0;

	if (ret != 0)
		return 1;													// 返回值在main函数中才生效
	else
		return 0;

}







//	有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。



//int main()
//{
//	int arr[5][5] = { 0 };
//	int i, j;
//
//	for (int i = 0; i < 5; i++)
//	{
//		
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = i+j;
//		}
//		
//
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	int k = 0;
//	scanf("%d", &k);
//
//	for (int i = 0; i < 5; i++)
//	{
//
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j] == k)
//			{
//				printf("Exist");
//				return 1;
//			}
//				
//		}
//		
//	}
//
//		printf("Not E");
//
//
//	return 0;
//}







//	猜凶手



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//
//	if (a != 0 && b == c && c == d && d != c)						// 根据题目3真1假，逐个条件置假，当所有条件满足时输出结果
//		printf("A");
//	else
//		if (a == 0 && b != c && c == d && d != c)
//			printf("B");
//		else
//			if (a == 0 && b == c && c != d && d != c)
//				printf("C");
//			else
//				if(a == 0 && b == c && c == d && d == c)
//				printf("D");
//
//
//
//
//	return 0;
//}







//	在屏幕上打印杨辉三角。



//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i, j;
//
//	for (int i = 0; i < n; i++)
//	{
//		
//		for (j = 0; j < i+1; j++)
//		{
//				arr[i][0] = 1;
//				if (i == j)
//					arr[i][j] = 1;
//				if(i>1 && j>0)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				
//		}
//		
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}