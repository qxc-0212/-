#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//Ѱ����
int find_mytury(int arr[3][3], int row, int line, int k)//row�� line�� kΪҪѰ�ҵ���
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
	printf("������ҪѰ�ҵ���:");
	scanf("%d", &k);
	int ret = find_mytury(arr, 3, 3, k);
	if (ret == 1)
	{
		printf("�ҵ���");
	}
	else
	{
		printf("û�ҵ�");
	}
	system("pause");
	return 0;
}