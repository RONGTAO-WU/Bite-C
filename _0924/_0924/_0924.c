#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣



//#include<string.h>
//
//void Print(char* arr)
//{
//	int sz = strlen(arr);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//
//	gets(arr);
//
//	Print(arr);
//
//	return 0;
//}







//	ʵ��һ�������������ð������



//int main()
//{
//	int arr[10] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	for (int i = 0; i < 10-1; i++)
//	{
//		
//		for (int j = 0; j < 10 - i-1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}







//	дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����



#include<string.h>

char* Jud(char *arr1[], char *arr2[])
{
	char tmp[100] = { 0 };
	strcpy(tmp, arr1);
	strcat(tmp, arr1);

	return strstr(tmp, arr2);

	
}

int main()
{
	char arr1[10] = { 0 };
	char arr2[10] = { 0 };

	gets(arr1);
	gets(arr2);

	char* ret = Jud(arr1, arr2);

	//char tmp[100] = { 0 };
	//strcpy(tmp, arr1);
	//strcat(tmp, arr1);

	//char* ret = strstr(tmp, arr2);

	//if (ret != 0)
	//	return 1;
	//else
	//	return 0;

	if (ret != 0)
		return 1;													// ����ֵ��main�����в���Ч
	else
		return 0;

}







//	��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�



//int main()
//{
//	int arr[5][5] = { 0 };
//	int i, j;
//
//	for (int i = 0; i < 5; i++)
//	{
//		
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = i+j;
//		}
//		
//
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	int k = 0;
//	scanf("%d", &k);
//
//	for (int i = 0; i < 5; i++)
//	{
//
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j] == k)
//			{
//				printf("Exist");
//				return 1;
//			}
//				
//		}
//		
//	}
//
//		printf("Not E");
//
//
//	return 0;
//}







//	������



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//
//	if (a != 0 && b == c && c == d && d != c)						// ������Ŀ3��1�٣���������ü٣���������������ʱ������
//		printf("A");
//	else
//		if (a == 0 && b != c && c == d && d != c)
//			printf("B");
//		else
//			if (a == 0 && b == c && c != d && d != c)
//				printf("C");
//			else
//				if(a == 0 && b == c && c == d && d == c)
//				printf("D");
//
//
//
//
//	return 0;
//}







//	����Ļ�ϴ�ӡ������ǡ�



//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i, j;
//
//	for (int i = 0; i < n; i++)
//	{
//		
//		for (j = 0; j < i+1; j++)
//		{
//				arr[i][0] = 1;
//				if (i == j)
//					arr[i][j] = 1;
//				if(i>1 && j>0)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				
//		}
//		
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}