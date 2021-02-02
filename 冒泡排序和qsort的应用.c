#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//打印数组
void print_arr(int arr[], int siz)
{
	int i = 0;
	for (i = 0; i < siz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//构成结构体
struct Stu
{
	char name[20];
	int age;
};

//交换元素
void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i + 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{  //相邻两个元素比较
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				//如果不满足顺序就交换
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

//如何比较年龄
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->age, ((struct Stu*)e2)->age);
}

//比较名字
int cmp_stu_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//计算两个数的指针
int cum_int(const void* e1, const void*e2)
{
	return (*(int*)e1 - *(int*)e2);
}

//整数排序
void test1()
{
	//类似qsort排序
	int arr[] = { 10, 15, 11, 2, 1, 39, 41, 25 };
	int siz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, siz, sizeof(arr[0]), cum_int);
	print_arr(arr, siz);
}

//结构体排序
void test2()
{
	//使用qsort
	struct Stu arr[] = { { "zhangwei", 20 }, { "zhangsan", 16 } };
	//按年龄
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}