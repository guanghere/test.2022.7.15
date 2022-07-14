#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//		do...while()循环语法
//		
//		do
//			循环语句:
//		while(表达式);

//		while	 是先判断再执行
//		do while 是先执行再判断

//int main()
//{
//	int a = 1;
//
//	do
//	{
//		//if (a == 5)
//			//continue;			//break;
//
//		printf(" %d " , a);		//括号里面的可能是一大段代码！
//		a++;
//	} while (a <= 10);
//
//	return 0;
//}
//		do while 在执行完循环体后进行判断


//计算 n的阶乘
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 1;
//
//	scanf("%d", &b);
//
//	for (a = 1; a <= b; a++)
//	{
//		n *= a;
//	}
//
//	printf("%d", n);
//
//	return 0;
//}



//计算 1!+ 2!+ 3!+ …… + 10!


//int main()
//{
//	int a = 0;
//	int b = 10;
//	int n = 1;
//
//
//	for (a = 1; a <= b; a++)
//	{
//		n *= a;
//	}
//	//printf("%d", n);
//
//	int s = n;
//
//	for (s = 1; s <= 10; s++)
//	{
//		printf("%d", n);
//	}
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 1;
//	int s = 0;
//	for (b = 1; b <= 3; b++)
//	{
//		n = 1;
//		for (a = 1; a <= b; a++)
//		{
//			n *= a;
//		}
//		s += n;
//	}
//
//	printf("%d", s);
//
//	return 0;
//}



//		在一组有序数组中使用二分查找或者折半法 找到需要的数字
int main()
{
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int i = 10;

	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz-1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < i)
		{
			left = mid + 1;
		}
		else if (arr[mid] > i)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,数字为  %d", mid + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}