#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 }, *q[4], k;
	//for (k = 0; k < 4; k++)
	//{
	//	q[k] = &a[k * 3];
	//}
	//printf("%d\n", q[3][1]);
	///*int n = 0;*/
	//int arr[4][5] = {
	//	1, 2, 8, 9,10,
	//	2, 4, 9, 12,13,
	//	4, 7, 10, 13,15,
	//	6, 8, 11, 15,16
	//};
	//printf("%d", arr[1] + 3);
	/*printf("������һ����:");
	scanf("%d", &n);
	*/
	/*signed char b = -1;
	unsigned char c = -1;
	printf("%d %d",b ,c);*/
	/*char a = -128;
	printf("%u", a);*/
    /*unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);*/
	//int s = 1, h;                    // ��ֵ�͸߶�
	//int i, j;                        // ѭ������
	//scanf("%d", &h);                 // �������
	//printf("1\n");                   // �����һ�� 1
	//for (i = 2; i <= h; s = 1, i++)         // ���� i �� 2 �����
	//{
	//	printf("1 ");                // ��һ�� 1
	//	for (j = 1; j <= i - 2; j++) // ��λ�� j �ƹ���һ��ֱ�ӿ�ʼѭ��
	//		//printf("%d ", (s = (i - j) / j * s));
	//		printf("%d ", (s = (i - j) * s / j));
	//	printf("1\n");               // ���һ�� 1������
	//}
	//getchar();
	//int s = 1, h;//hΪ�߶ȣ�sΪ��ֵ
	//int i, j;//ѭ����
	//scanf("%d", &h);//�߶�
	//int i, j;//i��j��
	//int n = 0;//ʵ���и�
	//int a[1000][1000];
	//while (~scanf("%d", &n))
	//{
	//	a[0][0] = 1;
	//	printf("%d", a[0][0]);
	//	for (i = 0; i < n; i++)
	//	{
	//		for (j = 0; j < n; j++)
	//		{
	//			printf("%d", a[i][j] = a[i - 1][j - 1] + a[i - 1][j]);
	//			if (j == 0 && j == i)
	//				printf("1");

	//		}
	//		printf("\n");
	//	}
	//}
	/*printf("erff");*/
	
//�������1
	//int i, j, n = 0;
	////�����ά�����������i,j �����ĳ�ʼ��
	//int a[100][100] = { 1 };
	//printf("������Ҫ��ӡ�������������>:");
	//scanf("%d", &n);
	//for (i = 1; i < n; i++)//��һ��ѭ��i�����ڼ���
	//{
	//	a[i][0] = 1;
	//	for (j = 1; j <= i; j++)//�ڶ���ѭ������i����ÿ���ַ���Ŀ
	//	{
	//		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	//	}
	//}
	//for (i = 0; i < n; i++)//ѭ�����д�ӡ
	//{
	//	for (j = 0; j <= i; j++)
	//		printf("%d ", a[i][j]);
	//	printf("\n");
	//}
//�������2
	//int data[30] = { 1 };
	//int n;
	//scanf("%d", &n);
	//int i, j;
	//printf("1\n"); //��һ�о�ֱ�Ӵ�ӡ��
	//for (i = 1; i < n; i++) //�ӵڶ��п�ʼ
	//{
	//	for (j = i; j > 0; j--) //�Ӻ���ǰ�������һ�е�������ʹ��ǰ�ͱ�����
	//	{
	//		data[j] += data[j - 1]; //��ʽͬ�ϣ����ڱ����һά����ʽҲ����ˡ�
	//	}

	//	for (j = 0; j <= i; j++) //��һ�������ֱ�Ӵ�ӡ�ˡ�
	//	{
	//		printf("%d ", data[j]);
	//	}
	//	putchar('\n');
	//}
//�ҷ���
    /*char number = 'A';
	for (; number <= 'D'; number++)
	{
		if ((number != 'A') + (number == 'C') + (number == 'D') + (number != 'D') == 3)
		{
			printf("������%c", number);
		}
	}*/


//������
for (int A = 1; A <= 5; A++)
	for (int B = 1; B <= 5; B++)
		for (int C = 1; C <= 5; C++)
			for (int D = 1; D <= 5; D++)
				for (int E = 1; E <= 5; E++)
					//�ų�������
					if (A*B*C*D*E == 120 && A + B + C + D + E == 15)
					{
						//�ж����
						if ((B == 2) + (A == 3) == 1 &&
							(B == 2) + (E == 4) == 1 &&
							(C == 1) + (D == 2) == 1 &&
							(C == 5) + (D == 3) == 1 &&
							(E == 4) + (A == 1) == 1)
						{
							printf("A=%d B=%d C=%d D=%d E=%d", A, B, C, D, E);
							printf("\n");
						}
		            }
	system("pause");
	return 0;
}