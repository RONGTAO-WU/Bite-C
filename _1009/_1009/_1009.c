#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	ʹ����ѧ�ļ��������ڵ�ǰĿ¼�·�һ���ļ�data.txt��дһ�����򣬽�data.txt�ļ�����һ�ݣ�����data_copy.txt�ļ���

//	����˼·��
//
//	���ļ�data.txt����ȡ����
//	���ļ�data_copy.txt��д����
//	��data.txt�ж�ȡ���ݴ�ŵ�data_copy.txt�ļ��У�ֱ���ļ�������
//	�ر������ļ�



int main()
{
	char arr[20] = "hello world";
	FILE* p = fopen("data.txt", "w");
	char fgets = (arr,20,p);


	return 0;
}