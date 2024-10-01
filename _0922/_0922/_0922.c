#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	实现一个函数，可以左旋字符串中的k个字符。



#include<string.h>

void Str(char arr[])
{
	int k = 0;
	scanf("%d", &k);
	int sz = strlen(arr);
	k = k % sz;										// 防止移动次数超出阈值

	for (int i = k;i<sz; i++)
	{
		printf("%c ", arr[i]);
	}
	int j = 0;
	while (k--)
	{
		printf("%c ", arr[j]);
		j++;
	}

}

int main()
{

	char arr[10] = { 0 };
	int i = 0;

	scanf("%s", &arr[i]);

	Str(arr);

	return 0;
}
