#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NEM 20
//����
void left_play(char* cha1,int n)
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
		char* tump = *cha1+1;
		char put = *tump;
		while ((*(tump + 1)) != '\0')
		{
			*(tump+1) = *tump;
			tump--;
		}
		*tump = put;
		n--;
	}
}
//�ж��Ƿ���ȷ
int judge(char* ch, const char* che)
{
	if (strlen(ch) == strlen(che))
	{
		return 1;
	}
	else
	{
		return 0;
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
	char che[NEM] = { 0 };
	scanf("%s %s %d", &ch, &che,&n);
	if (i == 1)
		left_play(ch, n);
	else
		right_play(ch,n);
	printf("%d",judge(ch, che));
	system("pause");
	return 0;
}