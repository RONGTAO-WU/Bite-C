#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>



//	����ϿεĲ�������Ϸ



#include<stdlib.h>

void emnu()
{
	printf("**********************\n");
	printf("***** 1.��ʼ��Ϸ *****\n");
	printf("***** 0.������Ϸ *****\n");
	printf("**********************\n");
}

void game()
{
	int r = rand() % 100 + 1;
	int a = 0;
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &a);

		if (a < r)
			printf("����С��\n");
		if (a > r)
			printf("���ִ���\n");
		if (a == r)
		{
			printf("�¶���,������ǣ�%d\n", r);
			break;
		}
	}
}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));
	do {

		emnu();

		printf("������:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("�����֣�\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������룺\n");
			break;

		}

	} while (input);



	return 0;
}







//	BC68 X��ͼ��
//	https://www.nowcoder.com/practice/83d6afe3018e44539c51265165806ee4?tpId=107&&tqId=33349&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main() {
//
//	int a = 0;
//
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a; j++)
//			{
//				if (i == j || i + j == a - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}







//	����������ͼ��
//	https://www.nowcoder.com/practice/72347ee949dc47399186ee183632f303?tpId=107&&tqId=33350&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//	int main() {
//
//    int a = 0;
//
//    while (scanf("%d", &a) != EOF)
//    {
//
//        for (int i = 0; i < a; i++)
//        {
//
//            for (int j = 0; j < a; j++)
//            {
//                if(i == 0 || i == a-1 || j == 0 || j == a - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//
//            printf("\n");
//
//        }
//    }
//
//    return 0;
//}







//  BC92 �������
//  https://www.nowcoder.com/practice/bb66c27cb7aa48f9ba7d9f88e4068285?tpId=107&&tqId=33373&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//	int main() {
//
//    int arr[10] = { 0 };
//    int lenght = sizeof(arr) / sizeof(arr[0]);
//
//    for (int i = 0; i < lenght; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    while (lenght--)
//    {
//            printf("%d ", arr[lenght]);
//    }
//
//
//
//    return 0;
//}







//	��дһ�����򣬴��û������ж�ȡ10���������洢��һ�������С�Ȼ�󣬼��㲢�����Щ������ƽ��ֵ��



//int main() 
//{
//	int arr[10] = { 0 };
//	int average = 0;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		scanf("%d", &arr[i]);
//		average += arr[i];
//	}
//
//	printf("%f", average / 10.0);
// 
// return 0;
//}







//	������A�е����ݺ�����B�е����ݽ��н�����������һ����



//int main()
//{
//	int arr1[5] = { 0 };
//	int arr2[5] = { 0 };
//
//	int tmp = 0;
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}