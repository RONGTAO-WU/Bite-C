#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������



//	�ݹ�

//int Fib(int i)
//{
//	if (i <= 2)
//		return 1;
//	else
//		return Fib(i - 1) + Fib(i - 2);
//
//
//}



//	�ǵݹ�

//int Fib(int i)
//{
//	int a = 2;
//	int b = 1;
//	int c = 1;
//	int sum = 1;
//
//	while (i > 2)
//	{
//		sum = a;
//		b = c;
//		c = a;
//		a = b + c;
//		i--;
//	}
//		return sum;
//
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//
//	printf("%d", Fib(i));
//
//	return 0;
//}







//	��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�



//int POW(int n, int k)
//{
//
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		if (k >= 2)
//			return n * POW(n, k-1);
//
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d %d",&n,&k);
//
//	printf("%d", POW(n, k));
//	return 0;
//}







//	дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��



//DigitSum(int n)
//{
//	
//		if (n % 10 == n)
//			return n;
//		else
//			if (n > 10)
//				return n % 10 + DigitSum(n / 10);
//	
//
//
//}
//
//
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d", DigitSum(n));
//
//
//	return 0;
//}







//	�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩



//	�ݹ�

//int fac(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		if (n > 2)
//			return n * fac(n - 1);
//
//}



//	�ǵݹ�

//int fac(int n)
//{
//	int sum = n;
//	while (n > 2)
//	{
//		sum *= n - 1;
//		n--;
//	}
//
//	return sum;
//
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d", fac(n));
//
//	return 0;
//
//}







//	�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ



//	����

//void stat(int n)
//{
//	if (n % 10 == n)
//		return printf("%d ", n);
//	else
//		if (n > 10)
//		{
//			printf("%d ", n % 10);
//			return stat(n / 10);
//		}
//
//}



//	����

void stat(int n)
{
	if (n > 10)
	{
		stat(n / 10);
	}
	printf("%d ", n%10);

}

int main()
{
	int n = 0;
	scanf("%d", &n);

	stat(n);

	return 0;
}