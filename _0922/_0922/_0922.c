#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	ʵ��һ�����������������ַ����е�k���ַ���



#include<string.h>

void Str(char arr[])
{
	int k = 0;
	scanf("%d", &k);
	int sz = strlen(arr);
	k = k % sz;										// ��ֹ�ƶ�����������ֵ

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
