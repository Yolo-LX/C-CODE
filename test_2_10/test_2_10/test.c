#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//>?�����ò��ᱨ�����档
#define MAX 10//�����ʶ������
enum SEX
{
	MALE,
	FEMALE,
	SECRET,//,,,,,

};//�ֺŲ���ȱ��
int main()
{
	//��������
	//�����䡯��-const
	/*
	const int n = 10;
	int a[n] = { 0 };//����(�)	E0028	���ʽ���뺬�г���ֵ	
	*/
	/*
	int a[MAX];//����	C4101	��a�� : δ���õľֲ�����	
	*/
	//ö�ٳ���
	//ö��-һһ�о�
	/* 
	enum SEX s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	MALE=6;//err
	*/
	//�ַ���
	/*
	char arr1[] = "abc";//����һ�����ص�0��Ϊ��ֹ�����ڼ����ַ�������ʱ/0�ǽ�����־���������ַ���������
	printf("%d", sizeof(arr1));//4,sizeof�Ǽ������͵ĳ��ȡ�
	char arr2[] = { 'a','b','c' ,0};//  /0 = 0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	// /0�ǡ��ַ������Ľ�����־
	for(int i=0;i<3;i++)
	printf("%c\n", arr2[i]);
	*/
	/*
	char arr1[] = "abc";//����һ�����ص�0��Ϊ��ֹ�����ڼ����ַ�������ʱ/0�ǽ�����־���������ַ���������
	printf("%d\n",strlen(arr1));
	char arr2[] = { 'a','b','/0','c',0};//4  /0 = 0
	printf("%d\n",strlen(arr2));
	*/
	//??)-����ĸ��
	printf("%d\n", strlen("c:\test\688\test.c"));
	printf("%c", '\32');
	return 0;
}
