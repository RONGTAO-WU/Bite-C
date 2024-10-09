#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	使用所学文件操作，在当前目录下放一个文件data.txt，写一个程序，将data.txt文件拷贝一份，生成data_copy.txt文件。

//	基本思路：
//
//	打开文件data.txt，读取数据
//	打开文件data_copy.txt，写数据
//	从data.txt中读取数据存放到data_copy.txt文件中，直到文件结束。
//	关闭两个文件



int main()
{
	char arr[20] = "hello world";
	FILE* p = fopen("data.txt", "w");
	char fgets = (arr,20,p);


	return 0;
}