#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	��һ��һ���������У�ֻ��һ�����ֳ��ִΣ��������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε����֡�



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







//	����������ʱ������������������������



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







//	дһ���������ز����������� 1 �ĸ�����



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







//	��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������



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







//	���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 



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