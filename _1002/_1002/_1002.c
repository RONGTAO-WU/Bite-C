#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>



//	模拟实现strcmp



//int _strcmp(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0' && *arr2 == '\0')
//			return 0;
//		arr1++;
//		arr2++;
//	}
//
//
//	if (*arr1 > *arr2)
//		return 1;
//	else
//		return -1;
//
//
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//
//	gets(arr1);
//	gets(arr2);
//
//	int ret = _strcmp(arr1, arr2);
//
//	printf("%d", ret);
//
//	return 0;
//}







//	模拟实现strcmp

//char* _strstr(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//
//	char* s1 = arr1;
//	char* s2 = arr2;
//
//	char* ret = arr1;
//
//	while (*ret)
//	{
//		s1 = ret;
//		s2 = arr2;
//
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//
//		if (*s2 == '\0')
//			return ret;
//
//		ret++;
//	}
//
//	return NULL;
//	
//}
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "o w";
//
//	char *ret = _strstr(arr1, arr2);
//
//	printf("%s", ret);
//
//	return 0;
//}







//	模拟实现strncpy



//char* _strncpy(char* arr1, char* arr2,size_t num)
//{
//	assert(arr1 && arr2);
//
//	char* ret = arr1;
//
//	for (int i = 0; i < num; i++)
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[20] = { "hello world"};
//	char arr2[20] = { "xxxxxxxxxxxxxx"};
//
//	char* ret = _strncpy(arr1, arr2,5);
//
//	printf("%s", ret);
//
//	return 0;
//}







//	模拟实现strncat



//char* _strncat(char* arr1, char* arr2, size_t num)
//{
//	assert(arr1 && arr2);
//
//	char* ret = arr1;
//
//	while (*arr1)
//		arr1++;
//
//	for (int i = 0; i < num; i++)
//		*arr1++ = *arr2++;
//
//	return ret;
//
//
//}
//
//int main()
//{
//	char arr1[20] = {"hello world"};
//	char arr2[] = { "xxxxxxxxxxxxxx" };
//
//	char* ret = _strncat(arr1, arr2,5);
//
//	printf("%s", ret);
//
//
//
//	return 0;
//}







//	模拟实现memcpy



//int* _memcpy(int* arr1, int* arr2,size_t num)
//{
//	assert(arr1 && arr2);
//
//	int* ret = arr1;
//
//	for (int i = 0; i < num; i++)
//	{
//		*(char*)arr1 = *(char*)arr2;
//		(char*)arr1++;
//		(char*)arr2++;
//	}
//
//	return ret;
//
//	
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 11,13,15,17,19 };
//
//	int* ret = _memcpy(arr1+5, arr2,5*sizeof(int));
//
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}







//	模拟实现memmove



void* _memmove(void* dest,void* src,size_t num)
{
	

	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest+1;
			src = (char*)src+1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}


}

int main()
{
	int arr[10] = { 2,3,5,7,11,13,17,19,23,29 };

	_memmove(arr,arr+2,5*sizeof(int));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}