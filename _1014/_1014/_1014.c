#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��



//#define Offset(P,i) (size_t)&(((P*)0)->i)
//
////#define OFFSETOF(P, i) \
//		(size_t)&(((P*)0)->i)
//
//
//struct P{
//
//	int i;
//	char j;
//	double k;
//};
//
//
//int main()
//{
//
//	printf("%d\n", Offset(struct P, i));
//	printf("%d\n", Offset(struct P, j));
//	printf("%d\n", Offset(struct P, k));
//
//
//	return 0;
//}







//	дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������



#define SWAP_ODD_EVEN_BITS(x) \
    ((((x) & 0xAAAAAAAA) >> 1) | (((x) & 0x55555555) << 1))


int main()
{

	int i = 10;
	printf("%d", SWAP_ODD_EVEN_BITS(i));

	return 0;
}