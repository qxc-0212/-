#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int jumpFloor(int number)
{
	int g = 1, f = 2;
	while (number-- > 1) 
	{
		f += g;
		g = f - g;
	}
	return g;
}
int main()
{
	int n = 0;
	printf("����������̨��:");
	scanf("%d", &n);
	printf("һ����%d������", n);
	system("pause");
	return 0;
}