#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水



//int main()
//{
//	int money = 20;
//	int bottle = 0;
//
//	while (money > 0)
//	{
//		money--;
//		bottle++;
//		if (bottle % 2 == 0)
//			bottle++;
//	}
//
//	printf("%d", bottle);
//
//
//	return 0;
//}







//	打印菱形



//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//
//
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < a - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	for (int i = 0; i < a-1; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2*(a-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//
//	return 0;
//}







//	求出0～100000之间的所有“水仙花数”并输出。
//	“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。



//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	
//
//
//	for (int i = 0; i < 100000; i++)
//	{
//		int j = i;
//		int k = i;
//		int count = 1;
//		int sum = 0;
//
//		while (j >= 10)								//	确认是几位数
//		{
//
//			count++;
//			j /= 10;
//
//		}
//		while (k > 10)
//		{
//			n = k % 10;
//			k /= 10;
//			sum = sum + pow(n, count);
//		}
//		n = k % 10;									//	对个位数进行特殊处理
//		sum = sum + pow(n, count);
//
//		if (i == sum)
//			printf("%d ", i);
//	}
//
//	return 0;
//}







//	求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//	例如：2 + 22 + 222 + 2222 + 22222



int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int m = 0;
	

	for (int i = 0; i < 5; i++)
	{
		m = n + m * 10;
		sum += m;
	}

	printf("%d", sum);


	return 0;
}