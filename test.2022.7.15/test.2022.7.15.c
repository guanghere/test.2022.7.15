#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//		do...while()ѭ���﷨
//		
//		do
//			ѭ�����:
//		while(���ʽ);

//		while	 �����ж���ִ��
//		do while ����ִ�����ж�

//int main()
//{
//	int a = 1;
//
//	do
//	{
//		//if (a == 5)
//			//continue;			//break;
//
//		printf(" %d " , a);		//��������Ŀ�����һ��δ��룡
//		a++;
//	} while (a <= 10);
//
//	return 0;
//}
//		do while ��ִ����ѭ���������ж�


//���� n�Ľ׳�
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



//���� 1!+ 2!+ 3!+ ���� + 10!


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



//		��һ������������ʹ�ö��ֲ��һ����۰뷨 �ҵ���Ҫ������
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
			printf("�ҵ���,����Ϊ  %d", mid + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}