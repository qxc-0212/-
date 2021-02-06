#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现strstr
char* my_strstr(const char* arr, const char* gam)
{
	assert(arr&&gam);//断言
	const char *cpp = arr;
	if (*arr == '\0')
		return (char*)arr;
	while (*cpp)
	{
		const char *p1 = cpp;
		const char *p2 = gam;
		while ((*p1) && (*p2) && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2=='\0')
		{
			return (char*)cpp;
		}
		cpp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "auhuhh";
	char arr2[] = "hjik";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("没找到\n");
	system("pause");
	return 0;
}
