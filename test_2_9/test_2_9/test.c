#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//system
#include <string.h>//strcmpy
int main()
{
	//����c���Ե�һЩСbug
	//����������������
	/*
	{
		int a = 10;
		printf("%d", a);
	}
	printf("%d", a); //����	C2065	��a�� : δ�����ı�ʶ��	
	*/
	//ȫ������ֲ����������ȼ�
	/*
	int a = 10;
	{
		int a = 100;
		printf("%d", a);
	}
	*/
	//�﷨�淶
	/*
	int num = 10;
	int num1 = 0;
	
	scanf("%d%d", &num, &num1);scanf��c�����ṩ�ģ�scanf_s���Ǳ�׼c�����ṩ�ģ���vs�ṩ�ġ�
	int sum = 0;//c�����﷨�淶������Ҫ�����ڴ������ǰ�档
	sum = num + num1;
	printf("%d",sum);
	*/
	//һЩ��̵��ĵ�
	/*
	1.���пձ���̬��ѧ��ģ�����˵Ĵ��롣
	2.������Ծ���һ����������ץס��һ�Ļ��ᡣ
	3.Ҫ����д�����ϰ��
	4..................
	2.������ʵϰ׼������������ʵϰ����Ƹ+�＾У԰��Ƹ��ǰ��.�����������Ĵ���У԰��������
	*/
	//��Ȥ�ĳ���
	/*
	char a[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("����һ��");
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
	2.10 һ�����þͲ���ͣ�£��Ҿ�������ð����Ǹ�����Ȧ�ˡ�
	*/
	return 0;
}