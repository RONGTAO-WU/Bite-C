#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	练习使用上课所学文件操作的相关函数



//int main()
//{
//	char arr[20] = "hello world";
//	FILE* p = fopen("data.txt", "r");
//	
//
//	//char k = 0;
//	//for (char k = 'a'; k <= 'z'; k++)				// 将字符写入文件	'w'
//	//{
//	//	fputc(k,p);
//	//}
//
//	//char ch = 0;
//	//while ((ch = fgetc(p)) != EOF)				// 从文件中读取字符	'r'
//	//{
//	//	printf("%c ", ch);
//	//}
//
//	//fputs(arr, p);								// 将数组字符串数据写入文件中	'w'
//	//fputs("hello bit\n", p);
//
//	//char brr[100] = { 0 };
//
//	//fgets(brr, 10,p);
//	//printf("%s", brr);
//
//	//fgets(brr, 10, p);
//	//printf("%s", brr);
//
//	//while (fgets(brr,10, p) != NULL)				// 将文件p中的字符串读到数组brr中，一次读取10个，直到为空的情况	'r'
//	//	printf("%s", brr);
//
//
//
//	//fprintf(p, "hello world");					// 写格式化数据到流中			'w'
//	//fprintf(p, arr);
//
//	//char c[100] = { 0 };
//	//fscanf(p,"%s" ,c);							// 从文件中读取数据到数组中		'r'
//
//	//printf("%s", c);
//
//
//
//
//	//char brr[100] = { 0 };
//
//	//sprintf(brr, "hello world");					// 将格式化数据写到字符串放在brr数组中
//
//	//printf("%s", brr);							
//
//	//char crr[100] = { 0 };
//	//sscanf(brr, "%s", crr);							// 从brr中以%s的形式提取数据到crr中
//	//printf("%s", crr);
//
//
//	int a[10] = { 1,2,3,4,5 };
//	int b[10] = { 0 };
//
//	fwrite(a, sizeof(a[0]), 5, p);							// 以二进制的形式将数据写入文件		'w'
//		// 数组地址	元素大小 写入数量 文件
//	
//	
//	
//	int i = 0;
//	while (fread(b+i, sizeof(b[0]), 1, p))					//	以二进制的形式从文件中读取数据	'r'
//		// 数据写入的数组地址
//	{
//		printf("%d ", b[i++]);
//	}
//
//	
//
//
//
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}







//	使用所学文件操作，在当前目录下放一个文件data.txt，写一个程序，将data.txt文件拷贝一份，生成data_copy.txt文件。

//	基本思路：
//
//	打开文件data.txt，读取数据
//	打开文件data_copy.txt，写数据
//	从data.txt中读取数据存放到data_copy.txt文件中，直到文件结束。
//	关闭两个文件



int main()
{
	FILE* pf = fopen("data.txt", "r");					// 写入之后读取要切读模式
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}

	char arr1[20] = "hello world";

	fputs(arr1, pf);

	char arr2[20] = { 0 };

//	FILE* pf = fopen("data.txt", "r");
	fgets(arr2, 20, pf);

	printf("%s", arr2);

	FILE* pd = fopen("data_copy.txt", "w");
	if (pd == NULL)
	{
		perror(fopen);
		return -1;
	}

	fputs(arr2, pd);


	fclose(pf);
	pf = NULL;
	fclose(pd);
	pd = NULL;

	return 0;
}