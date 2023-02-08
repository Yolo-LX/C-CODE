#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("有关操作符详解\n");
	//取模操作符
	//警告	C4244	“初始化” : 从“double”转换到“int”，可能丢失数据	
	/*
	int a = 6.0;
	int b = 5.0;
	int num = a % b;//a,b必须为整数返回的是整除之后的余数。
	printf("%d\n",num);
	return 0;
	*/
	//移位操作符
	/*
	int num = 10;
	int c = num << 1;//c存在的意义：num没被赋值前不会产生变化。
	num = -1;
	c = num << 1;

	警告	C4293	“ >> ”: Shift 计数为负或过大，其行为未定义	
	c = num >> -1;
	printf("%d", c);
	*/
	//位操作符
	//？不能创建临时变量（第三个变量），实现两个数的交换
	
	/*int a = 1;
	int b = 2;
	//加减法 
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d,%d", a, b);
	//按位异或(同0异1)
	a  00000000 00000000 00000000 00000001
	b  00000000 00000000 00000000 00000010
	   
	a 	00000000 00000000 00000000 00000011 
	b   00000000 00000000 00000000 00000001 
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d,%d", a, b);
	*/
	//求一个整数储存在内存中的二进制形式的1的个数
	/*
	int num = -1;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (num & (1 << i))
			count++;
	}
	printf("%d", count);
	*/
	//逻辑操作符
	//360笔试题
	/*
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//左边式子成立,后面停止运算
	i = a++ || ++b || d++;//右边式子不成立,后面停止运算
	printf(" % d % d % d % d", a, b, c, d);
	*/
	//自增自减
	/*
	int a=5,b=3,d;
	printf("%d%d%d", a++,++a,b++);
	printf("%d", b);
	*/
}