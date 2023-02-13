#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <widows.h>
#include <stdlib.h>
int main()
{
	//输出1-100之间的奇数
	/*
	int i;
	for( i=1;i<=100;i++)
	{
		if (0 == i % 2)
			;
		else
			printf("%d\n", i);
	}
	i = 0;
	while (i <= 100)
	{
		if (i % 2 == 0)
			;
		else
			printf("%d\n", i);
		i++;
	}
	i = 0;
	do
	{
		if (i % 2 == 0)
			;
		else
			printf("%d\n", i);
		i++;
	} while (i <= 100);
	*/
	//求n的阶乘
	/*
	int n;
	int i;
	int num=1;
	scanf("%d", &n);
	for (i = n; i >0; i--)
	{
		num *= i;
	}
	printf("%d", num);
	*/
	/*
	int n;
	int i;
	int num = 1;
	int sum = 0;
	scanf("%d", &n);
	for (int x = 0; x < n; x++)
	{
		num = 1;
		for (i = n; i > 0; i--)
		{
			num *= i;
		}
		sum += num;
	}
	printf("%d", num);
	*/
	/*
	//折半查找法-二分法
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n;
	int lable = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = lable - 1;
	int midle = (right + left) / 2;
	while (left <= right)
	{
		if (arr[n] < midle)
			left = midle + 1;
		else if (arr[n] > midle)
			right=midle - 1;
		else  (n = midle)
		{
			printf("数字的下标为%d", n);
			break；//循环要注意跳出
		}
	}
	if (left>right)
		printf("数字不存在");
		*/
	//演示多个字符从两端移动，向中间汇聚
	//welcome to bit !!!!
	//###################
	/*
	char arr1 = "welcome to bit !!!!";
	char arr2 = "###################";
	//int right = sizeof(arr1) / (arr1[0]) - 1//err
	//int right = sizeof(arr1) / (arr1[0]) - 2//存在/0；
	while (left <= right)
	{
		int left = 0;
		int right = strlen(arr1) - 1;
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		sleep(1000);
		system("cls");
		left++;
		right--;
	}
	*/
	//密码登陆
    /*
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf（"请输入密码");
		scanf("%s", password);
		//if (password == "123456")//字符串不能用==来比较，应该使用strcmp库函数
		if strcmpy(password, "123456")
		{
			printf（"密码正确");
			break;
		}
	}
		if (i == 3)
		{
			printf("三次密码都错误，退出程序")；
		}
	}
	*/
	return 0;

}