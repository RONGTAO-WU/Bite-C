#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


//	��һ���ַ���str�����ݵߵ��������������



//void Str(char *arr)
//{
//	int sz = strlen(arr);
//	char* a = arr;									// ��������������Ԫ�صĵ�ַ
//
//	while (*a)
//	{
//		printf("%c", *a);
//		a++;
//	}
//
//	char* p = &arr[sz - 1];							// &�������Ǳ�ʾ��������
//
//	printf("\n");
//	while (sz-- > 0)
//	{
//		printf("%c", *p);
//		p--;
//	}
//
//}
//
//int main()
//{
//	char arr[100] = {0};
//
//	gets(arr);
//
//	Str(arr);
//
//	return 0;
//}







//	ģ��ʵ�ֿ⺯��strlen



int Str(char *arr)
{

	int count = 0;

	while (*arr)
	{
		arr++;
		count++;
	}
	
	return count;

}

int main()
{
	char arr[100] = { 0 };
	gets(arr);										// gets��������һ���ַ���


	int sz = Str(arr);

	printf("%d", sz);

	return 0;
}







//	��������ʹ����ȫ����λ��ż��ǰ�档

//	����һ���������飬ʵ��һ��������
//	�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//	����ż��λ������ĺ�벿�֡�

//void Arr(int* arr1, int* arr2)
//{
//	int j = 0;
//	int k = 0;
//	for (int i = 0; i < 10; i++)
//	{
//
//		if (arr1[i] % 2 == 0)
//		{
//			arr2[k] = arr1[i];
//			k++;
//		}
//		else
//		{
//			arr1[j] = arr1[i];
//			j++;
//		}
//	}
//
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	printf("%d %d\n", *arr1++, *arr2++);
//	//}
//
//	int* p = &arr1[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		*p++ = *arr2++;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *arr1++);
//	}
//
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	Arr(arr1, arr2);
//
//
//
//	return 0;
//}