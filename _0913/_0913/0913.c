#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>



//	����������
//	https://www.nowcoder.com/practice/34d3911bf2fd48a285f6396e886a1259?tpId=107&&tqId=33299&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main() {
//    int a, b;
//
//    scanf("%d %d", &a, &b);
//
//    printf("%d %d", a / b, a % b);
//
//    return 0;
//}







//	���������
//	https://www.nowcoder.com/practice/557cc54704bb4d56b73b62d1a5455331?tpId=107&&tqId=33322&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main() {
//    int a = 0;
//
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 140)
//            printf("Genius");
//        else
//            printf("//");
//    }
//    return 0;
//}







//  �ж��������Ĵ�С��ϵ
//	https://www.nowcoder.com/practice/f05358b9e8164b27871c87d3097f4dab?tpId=107&&tqId=33330&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        if (a < b)
//            printf("%d<%d\n", a, b);
//
//    }
//
//
//    return 0;
//}







//	��5��������
//	https://www.nowcoder.com/practice/a4f527b043c04551bf4b80b4275a53bd?tpId=107&&tqId=33364&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main() {
//
//    int a = 0;
//
//    scanf("%d", &a);
//    if (a % 5 == 0)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}







//	�߶�ͼ��
//	https://www.nowcoder.com/practice/a95744270f274a14a8a0dafe10421589?tpId=107&&tqId=33337&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main() {
//    int a = 0;
//
//    while (scanf("%d", &a) != EOF)
//    {
//        while (a)
//        {
//            printf("*");
//            a--;
//        }
//        printf("\n");
//    }
//}







//#include<stdio.h>





//	д���뽫�������������Ӵ�С�����



//int main()
//
//{
//
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//
//
//	if (a > b && a > c)
//		if (b > c)
//			printf("%d %d %d", a, b, c);
//		else printf("%d %d %d", a, c, b);
//	if (b > a && b > c)
//		if (a > c)
//			printf("%d %d %d", b, a, c);
//		else printf("%d %d %d", b, c, a);
//	if (c > a && c > b)
//		if (a > b)
//			printf("%d %d %d", c, a, b);
//		else printf("%d %d %d", c, b, a);
//
//
//
//
//
//	return 0;
//
//}







//	дһ�������ӡ1 - 100֮������3�ı���������



//int main()
//{
//	for (int i = 3; i <= 100; i += 3)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//
//
//
//	return 0;
//}







//	�������ж�
//	https://www.nowcoder.com/practice/689ec1e742394e09b1059556fc167b65?tpId=107&&tqId=33332&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main() {
//
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && a == c)
//                printf("Equilateral triangle!\n");
//            else
//                if (a == b || a == c || b == c)
//                    printf("Isosceles triangle!\n");
//                else printf("Ordinary triangle!\n");
//        }
//        else printf("Not a triangle!\n");
//
//    }
//
//}







//	����Ļ�����9*9�˷��ھ���



//int main()
//{
//	int i, j;
//
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i * j);
//			
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}







// ��10 �����������ֵ



//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	printf("%d", max);
//
//}







// ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����



//int main()
//{
//	float i, j;
//	float sum = 0.0;
//
//	for (i = 1.0; i <= 100; i+=2)
//	{
//		sum += (1 / i);
//	}
//	for (j = 2.0; j < 100; j += 2)
//	{
//		sum -= (1 / j);
//	}
//	printf("%f", sum);
//
//
//	return 0;
//}







// ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9



//int main()
//{
//	int i;
//	int flag = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 9 == 0)
//			flag++;
//		if (i / 10 == 0)
//			flag++;
//	}
//	printf("%d", flag);
//
//
//	return 0;
//}







//	��ӡ100~200֮�������



//int main()
//{
//	int i,j;
//	
//
//	for (i = 101; i < 200; i+=2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		printf("%d ", i);
//		
//	}
//
//
//
//	return 0;
//}







// ��ӡ1000�굽2000��֮�������



//int main()
//{
//	int i, j;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//
//
//
//
//
//	return 0;
//}







// ���������������������������Լ��



int main()
{
	int a, b;
	int min = 0;

	scanf("%d %d", &a, &b);
	
	min = (a > b ? b : a);

		while (min)
		{
			if (a % min == 0 && b % min == 0)
			{
				printf("%d", min);
				break;
			}
			min--;
		}


	return 0;
}