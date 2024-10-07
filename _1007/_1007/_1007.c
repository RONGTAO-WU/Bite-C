#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



//	1929. 数组串联
//	https://leetcode.cn/problems/concatenation-of-array/description/



int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
	*returnSize = 2 * numsSize;
	int* ans = (int*)realloc(nums,sizeof(int) * numsSize * 2);
	if (ans == NULL)
	{
		perror("realloc");
		return -1;
	}

	nums = ans;

	for (int i = 0; i < 2 * numsSize; i++)
	{
		nums[numsSize + i] = nums[i];
	}


	return nums;
}

int main()
{
	

	int n;
	scanf("%d", &n);

	int* arr1 = (int*)malloc(sizeof(int) * n);
	if (arr1 == NULL)
	{
		perror("malloc");
		return - 1;
	}


	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}


	int* ret = getConcatenation(arr1, n, &n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", ret[i]);
	}

	return 0;
}







//	练习使用动态内存相关的4个函数，并调试观察。



//int main()
//{
//	int* p = (int*)malloc(40);
//	int* p = (int*)calloc(40,sizeof(int));
//	int* p = (int*)realloc(NULL, 40);
//
//	if (p == NULL)
//	{
//		perror(p);
//		return -1;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}







//	使用malloc函数模拟开辟一个二维数组



//int main()
//{
//	int row = 3;
//	int col = 5;
//	
//	int** arr = (int*)malloc(sizeof(int) * row);
//	if (arr == NULL)
//	{
//		perror("malloc");
//		return -1;
//	}
//
//		for (int i = 0; i < row; i++)
//		{
//			arr[i] = (int*)malloc(sizeof(int) * col);
//			if (arr[i] == NULL)
//			{
//				perror("malloc");
//				return -1;
//			}
//		}
//
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				arr[i][j] = i * col + j;
//			}
//		}
//
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//		}
//	
//		free(*arr);
//		arr = NULL;
//
//	return 0;
//}