#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//>?不引用不会报错报警告。
#define MAX 10//定义标识符常量
enum SEX
{
	MALE,
	FEMALE,
	SECRET,//,,,,,

};//分号不可缺少
int main()
{
	//常量类型
	//常‘变’量-const
	/*
	const int n = 10;
	int a[n] = { 0 };//错误(活动)	E0028	表达式必须含有常量值	
	*/
	/*
	int a[MAX];//警告	C4101	“a” : 未引用的局部变量	
	*/
	//枚举常量
	//枚举-一一列举
	/* 
	enum SEX s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	MALE=6;//err
	*/
	//字符串
	/*
	char arr1[] = "abc";//存在一个隐藏的0作为终止符，在计算字符串长度时/0是结束标志，不算做字符串的内容
	printf("%d", sizeof(arr1));//4,sizeof是计算类型的长度。
	char arr2[] = { 'a','b','c' ,0};//  /0 = 0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	// /0是“字符串”的结束标志
	for(int i=0;i<3;i++)
	printf("%c\n", arr2[i]);
	*/
	/*
	char arr1[] = "abc";//存在一个隐藏的0作为终止符，在计算字符串长度时/0是结束标志，不算做字符串的内容
	printf("%d\n",strlen(arr1));
	char arr2[] = { 'a','b','/0','c',0};//4  /0 = 0
	printf("%d\n",strlen(arr2));
	*/
	//??)-三字母词
	printf("%d\n", strlen("c:\test\688\test.c"));
	printf("%c", '\32');
	return 0;
}
