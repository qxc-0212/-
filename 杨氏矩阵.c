#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//寻找数
int find_mytury(int arr[3][3], int row, int line, int k)//row行 line列 k为要寻找的数
{
	int x = 0;
	int y = line - 1;
	while (x < row&&y >= 0)
	{
		if (arr[x][y] == k)
			return 1;
		else if (arr[x][y] < k)
			x++;
		else if (arr[x][y]>k)
			y--;
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1, 2, 3,
		4, 5, 6,
		7, 8, 9 };
	int k = 0;
	printf("请输入要寻找的数:");
	scanf("%d", &k);
	int ret = find_mytury(arr, 3, 3, k);
	if (ret == 1)
	{
		printf("找到了");
	}
	else
	{
		printf("没找到");
	}
	system("pause");
	return 0;
}