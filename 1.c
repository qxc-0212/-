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
//	for (n = 0; n <= 100000; ++n){ //����0-100000֮����������
//		for (i = n; i; i /= 10){
//			a[count] = i % 10;  //������a[count]��ÿһλ������,��count�������ֵ�λ��
//			++count;
//		}
//		for (i = 0; i < count; ++i){
//			sum += pow(a[i], count); //����������������ֵ�ÿһλ���ж�Ӧ��λ��count�η������
//		}
//		if (n == sum){
//			printf("%d ", n);
//		}
//		count = sum = 0; //ǿ�ƽ�count��sum��0
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
//		for (i = -n; i <= n; i++)              //��ӡ��
//		{
//			for (j = -n; j <= n; j++)           //��ӡ��
//			{
//				k = abs(i) + abs(j);
//				if (k<=n)                     //���Ĳ���
//					printf("*");          
//				else
//					printf(" ");
//			}
//			printf("\n");                 //��ӡ��һ�к�ǵû���
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
		//}//�ϲ���
		//int k;
		//scanf("%d", &n);                  //��ӡn������
		//n = (n - 1) / 2;                       //���öԳƣ�Ҫ�����ĿҪ��
		//for (i = -n; i <= n; i++)              //��ӡ��
		//{
		//	for (j = -n; j <= n; j++)           //��ӡ��
		//	{
		//		k = abs(i) + abs(j);
		//		if (k<=n)                     //���Ĳ���
		//			printf("*");          //��ʱ��������
		//		else
		//			printf(" ");
		//	}
		//	printf("\n");                 //��ӡ��һ�к�ǵû���
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
		//	for (j = 1; j <= i; j++)//��ӡ�ո�
		//		printf(" ");
		//	for (j = 1; j <= n - 2 * i; j++)//��ӡ��Ӧ���ַ�
		//		printf("* ");
		//	printf("\n");
//		//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int money = 0;//Ǯ��
//	int total = 0;//�ȵ�����
//	int empty = 0;//��ƿ��
//	printf("������Ǯ����");
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//�һ���ƿ�� + �ϴ�������ƿ��
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
//	while (*str != 0)//����Ϊ\0ʱ
//	{
//		count++; //�����ַ�������
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
