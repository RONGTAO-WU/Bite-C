#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	BC38 变种水仙花
//	https://www.nowcoder.com/practice/c178e3f5cc4641dfbc8b020ae79e2b71?tpId=107&&tqId=33319&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



int main()
{
	
	for (int i = 10000; i < 100000; i++)
	{
		int n = 10000;
		int sum = 0;
		while (n >= 10)
		{
			sum += (i / n) * (i % n);
			n /= 10;
		}
		if (i == sum)
			printf("%d ",i);
	}

	return 0;
}







//	BC98 序列中删除指定数字
//	https://www.nowcoder.com/practice/7bbcdd2177a445a9b66da79512b32dd7?tpId=107&&tqId=33379&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main()
//{
//	int arr1[20] = { 0 };
//
//	int n = 0;
//	scanf("%d", &n);
//	
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	int k = 0;
//	scanf("%d", &k);
//
//	
//	int arr2[20] = { 0 };
//	int j = 0;
//	int flag = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (arr1[i] != k)
//		{
//			arr2[j] = arr1[i];
//			j++;
//		}
//		else
//			flag++;
//	}
//
//
//	for (int i = 0; i < n-flag; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}







//	使用联合体判断大小端



//union
//{
//	char i;
//	int j;
//}p;
//
//int _jud()
//{
//	p.j = 1;
//
//	if (*(char*)&p.i)
//		return 1;
//	else
//		return 0;
//	
//}
//
//int main()
//{
//
//	int i = _jud();
//
//	if (i)
//		printf("小端");
//	else
//		printf("大端");
//
//	return 0;
//}