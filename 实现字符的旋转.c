#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NEM 20
//����
void left_play(char* cha1, int n)
{
	while (n != 0)
	{
		char* tump = cha1;
		char put = *tump;
		while ((*(tump + 1)) != '\0')
		{
			*tump = *(tump + 1);
			tump++;
		}
		*tump = put;
		n--;
	}
}
//����
void right_play(char* cha1, int n)
{
	while (n != 0)
	{
		char* tump = *cha1 + 1;
		char put = *tump;
		while ((*(tump + 1)) != '\0')
		{
			*(tump + 1) = *tump;
			tump--;
		}
		*tump = put;
		n--;
	}
}
//��ӡ�ַ���
void print(char* ch, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%c", ch[i]);
	}
}
int main()
{
	int i = 0;//1Ϊ������2Ϊ����
	printf("1Ϊ������2Ϊ������ѡ����");
	scanf("%d", &i);
	if (i == 1)
	{
		i = 1;
	}
	else if (i == 2)
	{
		i = 2;
	}
	int n = 0;//nλ�һ����������ַ�
	char ch[NEM] = { 0 };
	scanf("%s %d", &ch, &n);
	int size = sizeof(ch) / sizeof(ch[0]);
	if (i == 1)
		left_play(ch, n);
	else
		right_play(ch, n);
	print(ch, size);
	system("pause");
	return 0;
}