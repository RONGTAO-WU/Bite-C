#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>



//	ģ��ʵ��strlen



//int _strlen(char* arr)
//{
//	assert(arr);
//	int flag = 0;
//
//	while(*arr++)
//		flag++;
//
//	return flag;
//
//}
//
//int main()
//{
//	char arr[] = "qwertyuiop";
//
//	int ret = _strlen(arr);
//
//	printf("%d", ret);
//
//	return 0;
//}







//	ģ��ʵ��strcpy



//char* _strcpy(char* arr2, char* arr1)
//{
//	assert(arr1 && arr2);
//
//	char* ret = arr2;
//
//	while (*arr2++ = *arr1++)
//		;
//
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[] = { "hello world" };
//	char arr2[20] = { "xxxxxxxxxxxxxxx" };
//
//	char* ret = _strcpy(arr2, arr1);
//
//	printf("%s", ret);
//
//	return 0;
//}







//	ģ��ʵ��strcat



char* _strcat(char* arr1, char* arr2)
{
	assert(arr1 && arr2);

	char* ret = arr1;

	while (*arr1 != '\0')												// *arr1+1ֻ��ָ����һ��Ԫ�أ���arr1+1�������ƶ�����һ��λ��
		arr1++;

	while (*arr1++ = *arr2++)
		;
		
	
	return ret;

}

int main()
{
	char arr1[20] = { "hello \0xxxxxxx" };
	char arr2[20] = { "world" };

	char* ret = _strcat(arr1, arr2);

	printf("%s", ret);

	return 0;
}