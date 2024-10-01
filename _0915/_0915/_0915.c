#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	BC107 矩阵转置
//	https://www.nowcoder.com/practice/351b3d03e410496ab5a407b7ca3fd841?tpId=107&&tqId=33388&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main()
//{
//	int m, n;
//	int arr[20][20] = {0};
//
//	scanf("%d %d", &m, &n);
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}







//	BC100 有序序列合并
//	https://www.nowcoder.com/practice/a9e943b0dab142759807d0cfb6863897?tpId=107&&tqId=33381&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



int main()
{
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int arr[10000] = { 0 };

	int m, n;

	scanf("%d %d", &m, &n);

	for (int i = 0; i < m; i++)
	{
		scanf("%d",&arr1[i]);
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr2[i]);
	}

	int i = 0;
	int j = 0;

	while( i < m && j < n)
	{
		if (arr1[i] < arr2[j])
		{
			arr[i+j] = arr1[i];
			i++;
		}
		else
		{	
			arr[i + j] = arr2[j];
			j++;
		}
	}


	if (i == m && j < n)
		for (; j < n; j++)
			arr[i+j] = arr2[j];
	else
		for (; i < m; i++)
			arr[i + j] = arr1[i];


	for (int i = 0; i < m+n; i++)
	{
		printf("%d ", arr[i]);
	}




	return 0;
}







//	二分查找-函数实现



//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int flag = (left + right) / 2;
//		if (arr[flag] > key)
//		{
//			right = flag - 1;
//		}
//		else
//			if (arr[flag] < key)
//			{
//				left = flag + 1;
//			}
//			else
//				if (arr[flag] == key)
//				{
//					printf("找到了，下标为：%d ", flag);
//					return 0;
//				}
//	}
//	printf("找不到数字");
//	return -1;
//
// 
//}
//
//int main()
//{
//
//	int arr[] = { 11,22,33,44,55,66,77,88,99,100 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz-1;
//	
//	int key = 0;
//	scanf("%d", &key);
//	
//	
//	
//	bin_search(arr, left, right, key);
//	
//
//
//	return 0;
//}







//	实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定\



//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//
//
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//
//			printf("%5d * %2d = %3d", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}







//	创建一个整形数组，完成对数组的操作
//	实现函数init() 初始化数组为全0
//	实现print()  打印数组的每个元素
//	实现reverse()  函数完成数组元素的逆置。



//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0;i<sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	
//	reverse(arr,sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//
//	return 0;
//}