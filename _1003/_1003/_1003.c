#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	дһ�������жϵ�ǰ�����Ǵ�˻���С�ˣ������С�˷���1������Ǵ�˷���0.

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
		printf("С��");
	else
		printf("���");

	return 0;
}