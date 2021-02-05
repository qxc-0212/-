#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//Ä£ÄâÊµÏÖmemmove
void teyp_memmove(void* de1, const void* de2, size_t count)
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
	teyp_memmove(a, arr, 16);
}
int main()
{
	test1();
	system("pause");
	return 0;
}