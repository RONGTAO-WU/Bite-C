#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//	写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明



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







//	写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。



#define SWAP_ODD_EVEN_BITS(x) \
    ((((x) & 0xAAAAAAAA) >> 1) | (((x) & 0x55555555) << 1))


int main()
{

	int i = 10;
	printf("%d", SWAP_ODD_EVEN_BITS(i));

	return 0;
}