#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	写一个函数判断当前机器是大端还是小端，如果是小端返回1，如果是大端返回0.

int jud()
{
	int a = 1;

	if (*(char*)&a)
		return 1;
	else
		return 0;


}

int main()
{

	if (jud())
		printf("小端");
	else
		printf("大端");

	return 0;
}