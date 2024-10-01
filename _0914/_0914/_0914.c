#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>



//	完成上课的猜数字游戏



#include<stdlib.h>

void emnu()
{
	printf("**********************\n");
	printf("***** 1.开始游戏 *****\n");
	printf("***** 0.结束游戏 *****\n");
	printf("**********************\n");
}

void game()
{
	int r = rand() % 100 + 1;
	int a = 0;
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &a);

		if (a < r)
			printf("数字小了\n");
		if (a > r)
			printf("数字大了\n");
		if (a == r)
		{
			printf("猜对了,随机数是：%d\n", r);
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

		printf("请输入:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("猜数字：\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入有误，请重新输入：\n");
			break;

		}

	} while (input);



	return 0;
}







//	BC68 X形图案
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







//	空心正方形图案
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







//  BC92 逆序输出
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







//	编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。



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







//	将数组A中的内容和数组B中的内容进行交换。（数组一样大）



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