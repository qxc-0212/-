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
	/*printf("请输入一个数:");
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
	//int s = 1, h;                    // 数值和高度
	//int i, j;                        // 循环计数
	//scanf("%d", &h);                 // 输入层数
	//printf("1\n");                   // 输出第一个 1
	//for (i = 2; i <= h; s = 1, i++)         // 行数 i 从 2 到层高
	//{
	//	printf("1 ");                // 第一个 1
	//	for (j = 1; j <= i - 2; j++) // 列位置 j 绕过第一个直接开始循环
	//		//printf("%d ", (s = (i - j) / j * s));
	//		printf("%d ", (s = (i - j) * s / j));
	//	printf("1\n");               // 最后一个 1，换行
	//}
	//getchar();
	//int s = 1, h;//h为高度，s为数值
	//int i, j;//循环数
	//scanf("%d", &h);//高度
	//int i, j;//i行j列
	//int n = 0;//实际行高
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
	
//杨辉三角1
	//int i, j, n = 0;
	////定义二维数组计数符号i,j 行数的初始化
	//int a[100][100] = { 1 };
	//printf("请输入要打印的杨辉三角行数>:");
	//scanf("%d", &n);
	//for (i = 1; i < n; i++)//第一层循环i决定第几行
	//{
	//	a[i][0] = 1;
	//	for (j = 1; j <= i; j++)//第二层循环借用i限制每行字符数目
	//	{
	//		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	//	}
	//}
	//for (i = 0; i < n; i++)//循环逐行打印
	//{
	//	for (j = 0; j <= i; j++)
	//		printf("%d ", a[i][j]);
	//	printf("\n");
	//}
//杨辉三角2
	//int data[30] = { 1 };
	//int n;
	//scanf("%d", &n);
	//int i, j;
	//printf("1\n"); //第一行就直接打印了
	//for (i = 1; i < n; i++) //从第二行开始
	//{
	//	for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
	//	{
	//		data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
	//	}

	//	for (j = 0; j <= i; j++) //这一行填完就直接打印了。
	//	{
	//		printf("%d ", data[j]);
	//	}
	//	putchar('\n');
	//}
//找犯人
    /*char number = 'A';
	for (; number <= 'D'; number++)
	{
		if ((number != 'A') + (number == 'C') + (number == 'D') + (number != 'D') == 3)
		{
			printf("凶手是%c", number);
		}
	}*/


//猜名次
for (int A = 1; A <= 5; A++)
	for (int B = 1; B <= 5; B++)
		for (int C = 1; C <= 5; C++)
			for (int D = 1; D <= 5; D++)
				for (int E = 1; E <= 5; E++)
					//排除并名次
					if (A*B*C*D*E == 120 && A + B + C + D + E == 15)
					{
						//判断真假
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