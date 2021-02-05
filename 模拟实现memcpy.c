#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//Ä£ÄâÊµÏÖmemcpy
void teyp_memmcpy(void* de1, const void* de2, size_t count)
{
	void* ret = de1;
	assert(de1&&de2);//¶ÏÑÔ
	while (count--)
	{
		*(char*)de1 = *(char*)de2;
		++(char*)de1;
		++(char*)de2;
	}
	return ret;
}
void test1()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int a[20] = { 0 };
	teyp_memcpy(a, arr, 16);
}
int main()
{
	test1();
	system("pause");
	return 0;
}

//模拟实现memmove
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现memmove
void* my_memmove(void* deat, const void* det, size_t count)
{
	void* ret = deat;
	assert(deat&&det);//断言
	if (deat < det)//前到后
	{
		while (count--)
		{
			*(char*)deat = *(char*)det;
			++(char*)deat;
			++(char*)det;
		}
	}
	else//后到前
	{
		while (count--)
		{
			*((char*)deat + count) = *((char*)det + count);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 3, arr, 16);
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
