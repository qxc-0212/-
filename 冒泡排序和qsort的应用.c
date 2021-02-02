#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��ӡ����
void print_arr(int arr[], int siz)
{
	int i = 0;
	for (i = 0; i < siz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//���ɽṹ��
struct Stu
{
	char name[20];
	int age;
};

//����Ԫ��
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
		{  //��������Ԫ�رȽ�
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				//���������˳��ͽ���
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

//��αȽ�����
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->age, ((struct Stu*)e2)->age);
}

//�Ƚ�����
int cmp_stu_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//������������ָ��
int cum_int(const void* e1, const void*e2)
{
	return (*(int*)e1 - *(int*)e2);
}

//��������
void test1()
{
	//����qsort����
	int arr[] = { 10, 15, 11, 2, 1, 39, 41, 25 };
	int siz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, siz, sizeof(arr[0]), cum_int);
	print_arr(arr, siz);
}

//�ṹ������
void test2()
{
	//ʹ��qsort
	struct Stu arr[] = { { "zhangwei", 20 }, { "zhangsan", 16 } };
	//������
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