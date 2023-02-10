#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//system
#include <string.h>//strcmpy
int main()
{
	//关于c语言的一些小bug
	//定义域与生命周期
	/*
	{
		int a = 10;
		printf("%d", a);
	}
	printf("%d", a); //错误	C2065	“a” : 未声明的标识符	
	*/
	//全局量与局部变量的优先级
	/*
	int a = 10;
	{
		int a = 100;
		printf("%d", a);
	}
	*/
	//语法规范
	/*
	int num = 10;
	int num1 = 0;
	
	scanf("%d%d", &num, &num1);scanf是c语言提供的，scanf_s不是标准c语言提供的，是vs提供的。
	int sum = 0;//c语言语法规范，变量要定义在代码块最前面。
	sum = num + num1;
	printf("%d",sum);
	*/
	//一些编程的心得
	/*
	1.抱有空杯心态，学会模仿他人的代码。
	2.编程语言具有一定的相似性抓住大一的机会。
	3.要养成写代码的习惯
	4..................
	2.大二暑假实习准备，大三春季实习生招聘+秋季校园招聘提前批.常规批，大四春季校园常规批。
	*/
	//有趣的程序
	/*
	char a[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("测试一下");
	scanf("%s", a);
	if (strcmp(a,"wsz")== 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}*/
	/*
	2.10 一旦摆烂就不会停下，我觉得我因该拜托那个舒适圈了。
	*/
	return 0;
}