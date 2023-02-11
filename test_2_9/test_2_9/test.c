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
	2.10 一旦摆烂就不会停下，我觉得我因该拜托那个舒适圈了。byTO
	*/
	------------------------------------------------------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
		//
		//int main()
		//{
		//	int i = 0;
		//	for (i = 0; i < 10; i++)
		//	{
		//		if (i = 5)
		//			printf("%d ", i);
		//	}
		//	return 0;
		//}
		//
		//
		//
		//int func(int a)
		//{
		//    int b;
		//    switch (a)
		//    {
		//    case 1: b = 30;
		//    case 2: b = 20;
		//    case 3: b = 16;
		//    default: b = 0;
		//    }
		//    return b;
		//}
		//int main()
		//{
		//    printf("%d\n", func(1));
		//
		//    return 0;
		//}

		//F11 - 逐语句
		//F10 - 逐过程


		//#include <stdio.h>
		//int main() {
		//	int x = 3;
		//	int y = 3;
		//	switch (x % 2) {
		//	case 1:
		//		switch (y)
		//		{
		//		case 0:
		//			printf("first");
		//		case 1:
		//			printf("second");
		//			break;
		//		default: printf("hello");
		//		}
		//	case 2:
		//		printf("third");
		//	}
		//	return 0;
		//}



		//写代码将三个整数数按从大到小输出。
		//
		//int main()
		//{
		//	int a = 0;
		//	int b = 0;
		//	int c = 0;
		//	//输入
		//	scanf("%d%d%d", &a, &b, &c);
		//	//调整顺序
		//	if (a < b)
		//	{
		//		int tmp = a;
		//		a = b;
		//		b = tmp;
		//	}
		//	if (a < c)
		//	{
		//		int tmp = a;
		//		a = c;
		//		c = tmp;
		//	}
		//	if (b < c)
		//	{
		//		int tmp = b;
		//		b = c;
		//		c = tmp;
		//	}
		//
		//	//输出 - 大到小
		//	printf("%d %d %d\n", a, b, c);
		//	return 0;
		//}


		//写一个代码打印1 - 100之间所有3的倍数的数字
		//
		//int main()
		//{
		//	int i = 0;
		//	//for (i = 1; i <= 100; i++)
		//	//{
		//	//	//判断i是否为3的倍数
		//	//	if (i % 3 == 0)
		//	//	{
		//	//		printf("%d ", i);
		//	//	}
		//	//}
		//
		//	for (i = 3; i <= 100; i+=3)
		//	{
		//		printf("%d ", i);
		//	}
		//
		//	return 0;
		//}


		//给定两个数，求这两个数的最大公约数

		//
		//int main()
		//{
		//	int m = 0;
		//	int n = 0;
		//	scanf("%d%d", &m, &n);//24 18
		//	int max = 0;
		//	//假设最大公约数max就是m和n的较小值
		//	if (m > n)
		//		max = n;
		//	else
		//		max = m;
		//	
		//	while (1)
		//	{
		//		if (m % max == 0 && n % max == 0)
		//		{
		//			printf("最大公约数就是：%d\n", max);
		//			break;
		//		}
		//		max--;
		//	}
		//
		//	return 0;
		//}
		//
		//

		//辗转相除法

		//int main()
		//{
		//	int m = 0;
		//	int n = 0;
		//	scanf("%d%d", &m, &n);//24 18
		//	int t = 0;
		//
		//	while (t=m%n)
		//	{
		//		m = n;
		//		n = t;
		//	}
		//	printf("最大公约数：%d\n", n);
		//
		//	//最小公倍数 = m*n/最大公约数;
		//
		//	return 0;
		//}

		//打印1000年到2000年之间的闰年

		//int main()
		//{
		//	int y = 0;
		//	int count = 0;
		//	for (y = 1000; y <= 2000; y++)
		//	{
		//		//判断y是不是闰年
		//		//1. 被4整除，不能被100整除是闰年
		//		//2. 能被400整除是闰年
		//		if (y % 4 == 0)
		//		{
		//			if (y % 100 != 0)
		//			{
		//				printf("%d ", y);
		//				count++;
		//			}
		//		}
		//
		//		if (y % 400 == 0)
		//		{
		//			printf("%d ", y);
		//			count++;
		//		}
		//	}
		//	printf("\ncount = %d\n", count);
		//
		//	return 0;
		//}
		//
		//int main()
		//{
		//	int y = 0;
		//	int count = 0;
		//	for (y = 1000; y <= 2000; y++)
		//	{
		//		//判断y是不是闰年
		//		//1. 被4整除，不能被100整除是闰年
		//		//2. 能被400整除是闰年
		//		if (((y%4==0) && (y%100!=0)) || (y%400==0))
		//		{
		//			printf("%d ", y);
		//			count++;
		//		}
		//	}
		//
		//	printf("\ncount = %d\n", count);
		//
		//	return 0;
		//}



		//写一个代码：打印100~200之间的素数
		//素数 - 质数
		//只能被1和它本身整除
		//
		//int main()
		//{
		//	int i = 0;
		//	for (i = 100; i <= 200; i++)
		//	{
		//		//判断i是否为素数
		//		//2->i-1之间的数字去试除i,看能不能整除
		//		int j = 0;
		//		for (j = 2; j < i; j++)
		//		{
		//			if (i % j == 0)
		//			{
		//				break;
		//			}
		//		}
		//		//
		//		if (i == j)
		//		{
		//			printf("%d ", i);//素数
		//		}
		//	}
		//	return 0;
		//}


		//
		//int main()
		//{
		//	int count = 0;
		//	int i = 0;
		//	for (i = 100; i <= 200; i++)
		//	{
		//		//判断i是否为素数
		//		//2->i-1之间的数字去试除i,看能不能整除
		//		int j = 0;
		//		int flag = 1;//假设i就是素数
		//		for (j = 2; j < i; j++)
		//		{
		//			if (i % j == 0)
		//			{
		//				flag = 0;//不是素数
		//				break;
		//			}
		//		}
		//		//
		//		if (flag == 1)
		//		{
		//			count++;
		//			printf("%d ", i);//素数
		//		}
		//	}
		//	printf("\ncount = %d\n", count);
		//
		//	return 0;
		//}
		//
		//#include <math.h>
		//
		//int main()
		//{
		//	int count = 0;
		//	int i = 0;
		//
		//	//m = a*b
		//	//a和b中一定至少有一个数字是 <= 开平方m的
		//	//16 = 2*8 = 4*4
		//
		//	//sqrt - 是开平方的函数 - math.h
		//	for (i = 100; i <= 200; i++)
		//	{
		//		//判断i是否为素数
		//		//2->i-1之间的数字去试除i,看能不能整除
		//		int j = 0;
		//		int flag = 1;//假设i就是素数
		//		for (j = 2; j <= sqrt(i); j++)
		//		{
		//			if (i % j == 0)
		//			{
		//				flag = 0;//不是素数
		//				break;
		//			}
		//		}
		//		//
		//		if (flag == 1)
		//		{
		//			count++;
		//			printf("%d ", i);//素数
		//		}
		//	}
		//	printf("\ncount = %d\n", count);
		//
		//	return 0;
		//}


		//
		//#include <math.h>
		//
		//int main()
		//{
		//	int count = 0;
		//	int i = 0;
		//
		//	//m = a*b
		//	//a和b中一定至少有一个数字是 <= 开平方m的
		//	//16 = 2*8 = 4*4
		//
		//	//sqrt - 是开平方的函数 - math.h
		//	for (i = 101; i <= 200; i+=2)
		//	{
		//		//判断i是否为素数
		//		//2->i-1之间的数字去试除i,看能不能整除
		//		int j = 0;
		//		int flag = 1;//假设i就是素数
		//		for (j = 2; j <= sqrt(i); j++)
		//		{
		//			if (i % j == 0)
		//			{
		//				flag = 0;//不是素数
		//				break;
		//			}
		//		}
		//		if (flag == 1)
		//		{
		//			count++;
		//			printf("%d ", i);//素数
		//		}
		//	}
		//	printf("\ncount = %d\n", count);
		//
		//	return 0;
		//}
		//


		//int main()
		//{
		//flag:
		//	printf("hehe\n");
		//	printf("haha\n");
		//
		//	goto flag;
		//	return 0;
		//}

		//关机程序
		//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机!
		//
		//shutdown -s -t 60
		//shutdown -a
		//
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system()- 执行系统命令的
//
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system()- 执行系统命令的
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//system - stdlib.h
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		//string.h
//		if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}


//goto 语句只能在一个函数范围内跳转，不能跨函数
//
//void test()
//{
//flag:
//	printf("test\h");
//}
//
//int main()
//{
//	goto flag;
//	return 0;
//}


//f(x) = 2*x+1;
//f(x, y) = x+y;
#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//打印arr1这个字符串 %s - 以字符串的格式打印
//
//	return 0;
//}
//

int main()
	{
		char arr[] = "hello bit";
		memset(arr, 'x', 5);

		printf("%s\n", arr);

		return 0;
	}


	//
	//作用域和生命周期
	// 
	// 作用域
	//局部变量的作用域：就是变量所在的局部范围
	//全局变量的作用域：整个工程
	//
	//
	//int g_val = 2021;//全局变量
	//
	//int main()
	//{
	//	printf("1:%d\n", g_val);
	//	printf("hehe\n");
	//	{
	//		printf("2:%d\n", g_val);
	//
	//		int a = 10;
	//		printf("a = %d\n", a);
	//	}
	//	printf("3:%d\n", g_val);
	//
	//	return 0;
	//}
	//

	//声明一下变量
	//extern int g_val;
	//
	//int main()
	//{
	//	printf("%d\n", g_val);
	//
	//	return 0;
	//}

	//生命周期
	//变量的生命周期：变量的创建和销毁之间的时间段
	//
	//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
	//全局变量的生命周期：程序的生命周期
	//
	//
	//int main()
	//{
	//	{
	//		int a = 10;
	//		printf("%d\n", a);
	//	}
	//
	//	return 0;
	//}

	//常量

	//#define MAX 10000
	//
	//int main()
	//{
	//	//1. 字面常量
	//	//3.14;
	//	//10;
	//	//'a';
	//	//"abcdef";
	//
	//	//2. const修饰的常变量
	//	//const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
	//	//num = 20;
	//	//printf("num = %d\n", num);//20
	//
	//	//int arr[10] = {0};//10个元素
	//	//
	//	//const int n = 10;
	//	//int arr2[n] = {0};//n是变量的，这里是不行
	//
	//	//3. #define 定义的标识符常量
	//	//MAX = 20000;//err
	//	/*int n = MAX;
	//	printf("n = %d\n", n);*/
	//
	//
	//	return 0;
	//}

	//性别
	//enum Sex
	//{
	//	//这种枚举类型的变量的未来可能取值
	//	//枚举常量
	//	MALE = 3,//赋初值
	//	FEMALE,
	//	SECRET
	//};
	//
	//int main()
	//{
	//	//4. 枚举常量
	//	//可以一一列举的常量
	//
	//	enum Sex s = MALE;
	//	//MALE = 3;//err
	//	printf("%d\n", MALE);
	//	printf("%d\n", FEMALE);
	//	printf("%d\n", SECRET);
	//
	//	return 0;
	//}

	//字符串就是一串字符 - 用双引号括起来的一串字符
	//
	//int main()
	//{
	//	"abcdef";
	//	"hello bit";
	//
	//	return 0;
	//}
#include <string.h>
//
//int main()
//{
//	//字符数组 - 数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//string length
//	//printf("%d\n", len);
//
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}
//
//int main()
//{
//	//printf("c:\test\test.c");
//	printf("ab\ncd");//\+n
//	return 0;
//}
//

//
//int main()
//{
//	//printf("(are you ok??)");//??) -- ] - 三字母词
//	//(are you ok]
//	//
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("c:\\test\\test.c");
//	printf("\a");
//
//	//printf在打印数据的时候，可以指定打印的格式
//
//
//	return 0;
//}
//printf("%d", 100);
//printf("%c", 'a');
//printf("%s", "abc");

//int main()
//{
//	//printf("%c\n", '\130');//8进制的130是十进制的多少呢？
//	//X   -- ASCII码值是88
//	//printf("%c\n", '\101');//A - 65 - 8进制是：101
//	//printf("%c\n", '\x30');//48 - '0'
//	//printf("%d\n", strlen("abc"));//3
//	
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	return 0;
//}

//
//注释: 是用来解释复杂代码的
//
//
//int main()
//{
//	//int a = 10; //C++注释风格
//	/*
//	int b = 0;
//	*/   
//	//C语言的注释风格 - 不支持嵌套注释
//
//	return 0;
//}

//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特:>\n");
//	printf("那要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{ 
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//比特 - 30000代码 - 找一个不错的工作
//
//int main()
//{
//	int line = 0;
//	//循环
//	while(line<30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	
//	//int sum = num1 + num2;
//	//函数的方式解决
//	int sum = Add(num1, num2);
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//
//	//....
//
//	//数组 - 一组相同类型的元素的集合
//	//10个整形1-10存起来
//	//数组是用下标来访问的
//	//*
//	// /
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//	////char ch[5] = {'a', 'b', 'c'};//不完全初始化，剩余的默认为0
//
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2;//% - 取模（余）
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//
//	printf("%d\n", b);
//	return 0;
//}

//
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a = 6;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	//0 表示假，非0就是真
//	int a = 0;
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//如果a为真，做事
//	}
//	if (!a)
//	{
//		//如果a为假，做事
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}
//
//int main()
//{
//	//sizeof是一个操作符
//	//不是函数
//	//计算类型或者变量的大小的
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}
//
//int main()
//{
//	//10*4 = 40 
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}

	return 0;
}