#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//汉诺塔问题
	
	//青蛙跳台阶问题

	//《剑指offer》
	return 0;
}
//--------------------------------------------------------------------------------
/*
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//	
//	printf("%s\n", arr1);
//
//	return 0;
//}
//
//int get_max(int x, int y)
// 
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//返回z-返回较大值
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	//int max = get_max(a, b);
//	//int max = get_max(2+5, 3);//
//	int max = get_max(2 + 5, get_max(4, 7));
//	
//	printf("max = %d\n", max);
//
//	return 0;
//}

//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//写出问题了！
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个哈函数 - 交换2个整型变量的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;//4个字节的空间
//
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}
// 
//swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
//void Swap1(int x, int y)//
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//
//void Swap2(int* pa, int* pb)//
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个哈函数 - 交换2个整型变量的值
//
//	Swap1(a, b);//传值调用
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//传址调用
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//不建议这样写代码
//int is_prime(int n)
//{
//	//2->n-1 之间的数字
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			//printf("%d 不是素数\n", n);
//			return 0;
//		}
//	}
//	printf("%d 是素数\n", n);
//	return 1;
//}


//
#include <math.h>
//
//int is_prime(int n)
//{
//	//2->n-1 之间的数字
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//is_leap_year
//如果判断是闰年返回1
//不是闰年，返回0

//
//一个函数如果不写返回类型，默认返回int类型
//

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
// 
//err
//int is_leap_year(int n)
//{
//	if (n % 4 == 0)
//	{
//		if (n % 100 != 0)
//			return 1;
//		else
//			return 0;
//	}
//	else if (n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}
//
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//找到了就返回找到的位置的下标
//	//找不到返回-1
//	//数组arr传参，实际传递的不是数组的本身
//	//仅仅传过去了数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//这是一个错误的示范
// 
//int binary_search(int* a, int k)
//
//int binary_search(int a[], int k)
//{
//	//err
//	int sz = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//找到了就返回找到的位置的下标
//	//找不到返回-1
//	//数组arr传参，实际传递的不是数组的本身
//	//仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr, key);
//
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//

//void Add(int*p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//
//	return 0;
//}


//函数的嵌套调用和链式访问

//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问
//	//printf("%d\n", strlen("abc"));
//
//	/*char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	
//	printf("%s\n", strcpy(arr1, arr2));*/
//
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数声明一下 - 告知
//	int Add(int x, int y);
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}





//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
//

//E

//#include "add.h"
//

//#include "sub.h"

//导入静态库
//#pragma comment(lib, "sub.lib")

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = Add(a, b);
//
//	int c = Sub(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}
//
//
//void print(unsigned int n)//123
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//123
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//
//	return 0;
//}

//
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	int a = 10;
//	test(1);
//	return 0;
//}

//#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	//迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}
//有一些功能：可以使用迭代的方式实现，也可以使用递归



//int count = 0;
//递归可以求解，但是效率太低
//int Fib(int n)
//{
//	//统计第3个斐波那契数的计算机次数
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	//0-9 10
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//9 19 29 39 49 59 69 79 89 99
//90 91 92 94 .. 99
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//
//

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			sum += flag*1.0 / i;
//			flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}


//求10 个整数中最大值

//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...


//int main()
//{
//	int i = 1;
//	//行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//void test()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);//err
//}
//
//
//int main()
//{
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1

//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//
//void test(int*p1, int *p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//
//	return 0;
//}


//
//int a;
//int b;
//
//void test()
//{
//	a = 1;
//	b = 2;
//}
//
//
//int a = 0;
//int b = 0;
//
//int main()
//{
//	test();
//	//
//	return 0;
//}

//逗号表达式
//exec( (vl，v2)，(v3，v4)，v5，v6 );

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//#include <stdio.h>

//
//void print_table(int n)
//{
//	int i = 0;
//	//行
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	print_table(n);
//	//函数的起名是非常关键，名字最好能提现函数的功能
//
//	return 0;
//}


//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
//    printf("%d\n", Fun(2));
//
//    return 0;
//}
/*
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}
*/
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//
//	while (left<right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = *(str + left);//str[left];
//		*(str + left) = *(str+right);
//		*(str+right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void reverse_string(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);//
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	//判断条件
//	if(my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);//4
//	}
//
//	*(str + len - 1) = tmp;//5
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//
//	printf("%d\n", sum);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//#include <string.h>
//
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8;
//	//int arr[8];
//
//	//int a = 10;//初始化
//	////int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr2[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 1,2,3,4,5 };
//
//	//char ch1[5] = {'b', 'i', 't'};
//	//char ch2[] = { 'b', 'i', 't' };
//
//	//char ch3[5] = "bit";//b i t \0 0
//	//char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";
//	//[b i t \0]
//	char ch6[] = { 'b', 'i', 't' };
//	//[b i t]
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值
//
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("-------------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//%p - 是按地址的格式打印 - 十六进制的打印

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
	//printf#define _CRT_SECURE_NO_WARNINGS 1

//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//
//void test(int*p1, int *p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//
//	return 0;
//}


//
//int a;
//int b;
//
//void test()
//{
//	a = 1;
//	b = 2;
//}
//
//
//int a = 0;
//int b = 0;
//
//int main()
//{
//	test();
//	//
//	return 0;
//}

//逗号表达式
//exec( (vl，v2)，(v3，v4)，v5，v6 );

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//#include <stdio.h>

//
//void print_table(int n)
//{
//	int i = 0;
//	//行
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	print_table(n);
//	//函数的起名是非常关键，名字最好能提现函数的功能
//
//	return 0;
//}


//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
//    printf("%d\n", Fun(2));
//
//    return 0;
//}
/*
	int my_strlen(char* str)
	{
		int count = 0;
		while (*str != '\0')
		{
			count++;
			str++;
		}

		return count;
	}
*/
	//void reverse_string(char* str)
	//{
	//	int left = 0;
	//	int right = my_strlen(str)-1;
	//
	//	while (left<right)
	//	{
	//		char tmp = str[left];
	//		str[left] = str[right];
	//		str[right] = tmp;
	//		left++;
	//		right--;
	//	}
	//}
	//
	//void reverse_string(char* str)
	//{
	//	int left = 0;
	//	int right = my_strlen(str) - 1;
	//
	//	while (left < right)
	//	{
	//		char tmp = *(str + left);//str[left];
	//		*(str + left) = *(str+right);
	//		*(str+right) = tmp;
	//		left++;
	//		right--;
	//	}
	//}
	//
	//
	//void reverse_string(char* str)
	//{
	//	char tmp = *str;//1
	//	int len = my_strlen(str);//
	//	*str = *(str + len - 1);//2
	//	*(str + len - 1) = '\0';//3
	//	//判断条件
	//	if(my_strlen(str+1)>=2)
	//	{
	//		reverse_string(str + 1);//4
	//	}
	//
	//	*(str + len - 1) = tmp;//5
	//}
	//int main()
	//{
	//	char arr[] = "abcdef";
	//	reverse_string(arr);//数组名arr是数组arr首元素的地址
	//
	//	printf("%s\n", arr);//fedcba
	//	return 0;
	//}

	//int DigitSum(int n)
	//{
	//	if (n > 9)
	//	{
	//		return DigitSum(n / 10) + n % 10;
	//	}
	//	else
	//	{
	//		return n;
	//	}
	//}
	//
	//int main()
	//{
	//	int num = 1729;
	//	int sum = DigitSum(num);
	//
	//	printf("%d\n", sum);
	//	return 0;
	//}

	//编写一个函数实现n的k次方，使用递归实现
	//double Pow(int n, int k)
	//{
	//	if (k == 0)
	//		return 1.0;
	//	else if (k > 0)
	//		return n * Pow(n, k - 1);
	//	else
	//		return 1.0 / (Pow(n, -k));
	//}
	//
	//
	//int main()
	//{
	//	int n = 0;
	//	int k = 0;
	//	scanf("%d %d", &n, &k);
	//	double ret = Pow(n, k);
	//	printf("%lf\n", ret);
	//	return 0;
	//}
//#include <string.h>
//
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8;
//	//int arr[8];
//
//	//int a = 10;//初始化
//	////int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr2[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 1,2,3,4,5 };
//
//	//char ch1[5] = {'b', 'i', 't'};
//	//char ch2[] = { 'b', 'i', 't' };
//
//	//char ch3[5] = "bit";//b i t \0 0
//	//char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";
//	//[b i t \0]
//	char ch6[] = { 'b', 'i', 't' };
//	//[b i t]
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值
//
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("-------------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//%p - 是按地址的格式打印 - 十六进制的打印

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}
/*
	int main()
	{
		//printf("%x\n", 0x12);
		//printf("%p\n", 0x12);

		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

		int* p = arr;//数组名是数组首元素的地址
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *p);
			p++;
		}

		return 0;
	}("%x\n", 0x12);
	//printf("%p\n", 0x12);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;//数组名是数组首元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}

	return 0;
}
*/