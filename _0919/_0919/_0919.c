#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ



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







//	��ӡ����



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







//	���0��100000֮������С�ˮ�ɻ������������
//	��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������



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
//		while (j >= 10)								//	ȷ���Ǽ�λ��
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
//		n = k % 10;									//	�Ը�λ���������⴦��
//		sum = sum + pow(n, count);
//
//		if (i == sum)
//			printf("%d ", i);
//	}
//
//	return 0;
//}







//	��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//	���磺2 + 22 + 222 + 2222 + 22222



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