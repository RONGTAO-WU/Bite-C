#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	������ת�Ʊ����ʵ��



//int Add(int x, int y)
//{
//
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("-----------------------\n");
//	printf("---- 1.Add   2.Sub ----\n");
//	printf("---- 3.Mul   4.Div ----\n");
//	printf("---- 0.Exit        ----\n");
//	printf("-----------------------\n");
//
//}
//
//int main()
//{
//	int (*p[5])(int,int) = {0,Add,Sub,Mul,Div};
//	int ret = 0;
//	int input = 0;
//	int a, b;
//
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		
//		
//		if (input >= 1 && input <= 4)
//		{
//			printf("�����룺> \n");
//			scanf("%d %d", &a, &b);
//			ret = p[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else if (input > 4)
//		{
//			printf("����������������룺>\n");
//		}
//
//
//	} while (input);
//
//
//	return 0;
//}







//	һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ���дһ�������ҳ�������ֻ����һ�ε����֡�



#include<string.h>

void compare(int *arr,int sz)
{
	

	for (int i = 0; i < sz; i++)
	{
		int flag = 0;
		for (int j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
				flag++;

		}

		if(flag == 1)
		printf("%d ", arr[i]);

	}

	
}

int main()
{
	int arr[20] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}


	compare(arr,10);


	return 0;
}







//  BC54 ����·�����
//	https://www.nowcoder.com/practice/13aeae34f8ed4697960f7cfc80f9f7f6?tpId=107&&tqId=33335&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking



//int main() {
//
//    int arr1[20] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int arr2[20] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//        {
//            printf("%d\n", arr2[b]);
//        }
//        else
//        {
//            printf("%d\n", arr1[b]);
//        }
//
//    }
//
//    return 0;
//}