#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	��ϰʹ���Ͽ���ѧ�ļ���������غ���



//int main()
//{
//	char arr[20] = "hello world";
//	FILE* p = fopen("data.txt", "r");
//	
//
//	//char k = 0;
//	//for (char k = 'a'; k <= 'z'; k++)				// ���ַ�д���ļ�	'w'
//	//{
//	//	fputc(k,p);
//	//}
//
//	//char ch = 0;
//	//while ((ch = fgetc(p)) != EOF)				// ���ļ��ж�ȡ�ַ�	'r'
//	//{
//	//	printf("%c ", ch);
//	//}
//
//	//fputs(arr, p);								// �������ַ�������д���ļ���	'w'
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
//	//while (fgets(brr,10, p) != NULL)				// ���ļ�p�е��ַ�����������brr�У�һ�ζ�ȡ10����ֱ��Ϊ�յ����	'r'
//	//	printf("%s", brr);
//
//
//
//	//fprintf(p, "hello world");					// д��ʽ�����ݵ�����			'w'
//	//fprintf(p, arr);
//
//	//char c[100] = { 0 };
//	//fscanf(p,"%s" ,c);							// ���ļ��ж�ȡ���ݵ�������		'r'
//
//	//printf("%s", c);
//
//
//
//
//	//char brr[100] = { 0 };
//
//	//sprintf(brr, "hello world");					// ����ʽ������д���ַ�������brr������
//
//	//printf("%s", brr);							
//
//	//char crr[100] = { 0 };
//	//sscanf(brr, "%s", crr);							// ��brr����%s����ʽ��ȡ���ݵ�crr��
//	//printf("%s", crr);
//
//
//	int a[10] = { 1,2,3,4,5 };
//	int b[10] = { 0 };
//
//	fwrite(a, sizeof(a[0]), 5, p);							// �Զ����Ƶ���ʽ������д���ļ�		'w'
//		// �����ַ	Ԫ�ش�С д������ �ļ�
//	
//	
//	
//	int i = 0;
//	while (fread(b+i, sizeof(b[0]), 1, p))					//	�Զ����Ƶ���ʽ���ļ��ж�ȡ����	'r'
//		// ����д��������ַ
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







//	ʹ����ѧ�ļ��������ڵ�ǰĿ¼�·�һ���ļ�data.txt��дһ�����򣬽�data.txt�ļ�����һ�ݣ�����data_copy.txt�ļ���

//	����˼·��
//
//	���ļ�data.txt����ȡ����
//	���ļ�data_copy.txt��д����
//	��data.txt�ж�ȡ���ݴ�ŵ�data_copy.txt�ļ��У�ֱ���ļ�������
//	�ر������ļ�



int main()
{
	FILE* pf = fopen("data.txt", "r");					// д��֮���ȡҪ�ж�ģʽ
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