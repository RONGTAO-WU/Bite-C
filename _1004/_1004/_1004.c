#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>



//int main()
//{
//	int ret = atoi("15ff629");
//	printf("%d\n", ret);
//}

void _atoi(char* arr)
{
	int* p = 0;
	int flag = 0;

	if (*arr == '\0' || *arr == NULL)
		return 0;

	while (*arr == " ")							// 跳过空白字符
		arr++;

	while (*arr++)
	{
		if (*arr >= '0' && *arr <= '9')				// 记住第一次数字的位置
		{
			p = arr;
			break;
		}
	}

	int* pa = p;

	while (p++)
	{
		if (*p >= '0' && *p <= '9')
			flag++;
		else
			break;
	}

	for (int i = 0; i < flag; i++)
	{
		printf("%d", *(pa + i));
	}

}

int main()
{
	char arr[20] = { 0 };

	gets(arr);

	_atoi(arr);

	return 0;
}