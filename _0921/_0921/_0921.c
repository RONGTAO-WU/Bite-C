#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	在一个一整型数组中，只有一个数字出现次，其他数组都是成对出现的，请找出那个只出现一次的数字。



//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < 10; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				flag++;
//			}
//			
//		}
//		if (flag == 1)
//			printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}







//	不允许创建临时变量，交换两个整数的内容



//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	n = n ^ m;
//	m = n ^ m;
//	n = n ^ m;
//
//	printf("%d %d", n, m);
//
//	return 0;
//}







//	写一个函数返回参数二进制中 1 的个数。



int main()
{
	int n;
	scanf("%d", &n);
	int flag = 0;

	while (n)
	{
		n &= (n - 1);
		flag++;
	}

	printf("%d", flag);

	return 0;
}







//	获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列



//int main()
//{
//	int n, m;
//	scanf("%d", &n);
//	m = n;
//
//	for (int i = 0; i < 32; i += 2)
//	{
//		printf("%d ", ((m & 2) == 2));
//		m >>= 2;
//	}
//	printf("\n");
//	for (int i = 0; i < 32; i += 2)
//	{
//		printf("%d ", (n & 1));
//		n >>= 2;
//	}
//
//
//	return 0;
//}







//	编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 



//int main()
//{
//	int n, m;
//	scanf("%d %d",&n,&m);
//
//	int i = n ^ m;
//	int flag = 0;
//
//	for (int j = 0; j < 32; j++)
//	{
//		if (i & 1 == 1)
//		{
//			flag++;
//		}
//		i >>= 1;
//	}
//
//	printf("%d", flag);
//
//	return 0;
//}