#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



//	练习使用库函数，qsort排序各种类型的数据



//void print(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//void sort_(const void * e1 , const void * e2)
//{
//	return *(int*)e1 - *(int*)e2;
//
//}
//
//void test()
//{
//
//	int arr[10] = { 55,46,21,31,05,84,97,62,31,15 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr,sz,sizeof(arr[0]),sort_);
//	print(arr,sz);
//
//}
//
//int main()
//{
//
//	test();
//
//
//	return 0;
//}







//	模仿qsort的功能实现一个通用的冒泡排序



void print(char* arr,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}

}

int _sort(const void* e1, const void* e2)
{

	return *(char*)e1 - *(char*)e2;																	// 取出各自的值进行比较

}

void swap(char * x,char * y ,size_t num)
{
	for (int i = 0; i < num; i++)																	// 分解为最小单位char进行交换，因为不知道是什么数据类型
	{
		char tmp = *x;
		*x = *y;
		*y = tmp;
		x++;
		y++;

	}

}

void _qsort(void* arr, size_t sz, size_t num, char(*_sort1)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;

	for  (i = 0; i < sz; i++)
	{
		
		for (j = 0; j < sz-1-i; j++)
		{
			if (_sort1((char*)arr + j * num ,(char*)arr + (j + 1) * num) > 0)						// 判断它们是否满足交换条件

				swap( (char*)arr + j * num , (char*)arr + (j + 1) * num,num );						// 满足条件进行交换
		}
	}

}

void test()
{
	char arr[10] = { 'q','w','e','r','t','y','u','i','o','p' };
	//int arr[10] = { 65,84,54,974,8,52,31,78,145,45 };
	int sz = sizeof(arr)/sizeof(arr[0]);

//	printf("%d", sz);

	_qsort(arr, sz, sizeof(arr[0]), _sort);

	print(arr, sz);

}

int main()
{

	test();

	return 0;
}