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

	while (*arr == " ")							// �����հ��ַ�
		arr++;

	while (*arr++)
	{
		if (*arr >= '0' && *arr <= '9')				// ��ס��һ�����ֵ�λ��
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