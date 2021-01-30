#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int main(){
//	int n;
//	int a[10] = { 0 };
//	int i;
//	int sum = 0;
//	int count = 0;
//	for (n = 0; n <= 100000; ++n){ //遍历0-100000之间所有数字
//		for (i = n; i; i /= 10){
//			a[count] = i % 10;  //用数组a[count]将每一位存起来,用count记下数字的位数
//			++count;
//		}
//		for (i = 0; i < count; ++i){
//			sum += pow(a[i], count); //将数组中所存的数字的每一位进行对应的位数count次方并求和
//		}
//		if (n == sum){
//			printf("%d ", n);
//		}
//		count = sum = 0; //强制将count与sum归0
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i, j, k;                      
//		for (i = -n; i <= n; i++)              //打印行
//		{
//			for (j = -n; j <= n; j++)           //打印列
//			{
//				k = abs(i) + abs(j);
//				if (k<=n)                     //核心部分
//					printf("*");          
//				else
//					printf(" ");
//			}
//			printf("\n");                 //打印完一行后记得换行
//		}
//		/*for (i = 0; i<n; i++)
		//{
		//for (j = 0; j<abs(n / 2 - i); j++)
		//printf(" ");
		//for (j = 0; j<n - 2 * abs(n / 2 - i); j++)
		//printf("*");
		//printf("\n");
		//}*/
		//for(j = 1; j <= n - i; j++)
		//	{
		//		printf(" ");
		//	}
		//	for (j = n - i + 1; j<n + i; j++)
		//	{
		//		printf("*");
		//	}
		//	printf("\n");
		//   }

		//for (i = n - 1; i >= 1; i--)
		//{
		//	for (j = 1; j <= (n - i); j++)
		//	{
		//		printf(" ");
		//	}
		//	for (j = n - i + 1; j<n + i; j++)
		//	{
		//		printf("*");
		//	}
		//	printf("\n");
		//}
		//for (i = 0; i < n; i++)
		//{
		//	for (j = 0; j < n - i; j++)
		//		printf(" ");
		//	for (j = 0; j <= i; j++)
		//		printf("* ");
		//	printf("\n");
		//}//上部分
		//int k;
		//scanf("%d", &n);                  //打印n行菱形
		//n = (n - 1) / 2;                       //利用对称（要结合题目要求）
		//for (i = -n; i <= n; i++)              //打印行
		//{
		//	for (j = -n; j <= n; j++)           //打印列
		//	{
		//		k = abs(i) + abs(j);
		//		if (k<=n)                     //核心部分
		//			printf("*");          //有时候是数字
		//		else
		//			printf(" ");
		//	}
		//	printf("\n");                 //打印完一行后记得换行
		//}
		/*for (i = 0; i < n - 1; i++)
		{
		int j = 0;
		for (; j <= i; j++)
		{
		printf(" ");
		}
		for (j = 0; j <2 * n - 3 - 2 * i; j++)
		{
		printf("* ");
		}
		printf("\n");
		}
		}*/
		/*for (i = 0; i < n; i++)
		{
		for (j = 0; j < i + 1; j++)
		printf("* ");
		for (j = 0; j <= j - 1 - i; j++)
		printf(" ");
		printf("\n");
		}*/
		//for (i = 1; i <= n / 2; i++)
		//{
		//	for (j = 1; j <= i; j++)//打印空格
		//		printf(" ");
		//	for (j = 1; j <= n - 2 * i; j++)//打印对应的字符
		//		printf("* ");
		//	printf("\n");
//		//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int money = 0;//钱数
//	int total = 0;//喝的总数
//	int empty = 0;//空瓶数
//	printf("请输入钱数：");
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//兑换的瓶数 + 上次余留的瓶数
//	}
//	printf("total=%d", total);
//	system("pause");
//	return 0;
//}
//#include<assert.h>
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != 0)//当不为\0时
//	{
//		count++; //计算字符串长度
//			str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[]="huudfhudgh";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	system("pause");
	return 0;
}
