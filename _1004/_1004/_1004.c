#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>



//int main()
//{
//	int ret = atoi("15ff629");
//	printf("%d\n", ret);
//}

int _atoi(char* arr)
{
	int flag = 1;
	int num = 0;

	if (*arr == '\0' || *arr == NULL)			// 为零或者为空
		return 0;

	
	while(*arr)									// 跳过不属于数字的字符	 -- isspace(arr)
	{
		if (*arr >= '0' && *arr <= '9')
			break;
		else
			arr++;
	}

	if (*arr == '\0')							// 为零说明数组中不存在数字
		return 0;
		

	while (*arr >= '0' && *arr <= '9')			// isdigit(arr)
	{
		if (*(arr - 1) == '-')					// 判断数字前是否带负号，默认正号
		{
			flag = -1;
		}

		num = num * 10 + (*arr - 48);
		arr++;
	}
	return flag * num;

}

int main()
{
	char arr[20] = { 0 };

	gets(arr);

	int ret = _atoi(arr);

	printf("%d", ret);

	return 0;
}


