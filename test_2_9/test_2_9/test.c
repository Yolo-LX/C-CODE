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
	2.10 һ�����þͲ���ͣ�£��Ҿ�������ð����Ǹ�����Ȧ�ˡ�byTO
	*/

	//
	//���������������
	// 
	// ������
	//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
	//ȫ�ֱ�������������������
	//
	//
	//int g_val = 2021;//ȫ�ֱ���
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

	//����һ�±���
	//extern int g_val;
	//
	//int main()
	//{
	//	printf("%d\n", g_val);
	//
	//	return 0;
	//}

	//��������
	//�������������ڣ������Ĵ���������֮���ʱ���
	//
	//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
	//ȫ�ֱ������������ڣ��������������
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

	//����

	//#define MAX 10000
	//
	//int main()
	//{
	//	//1. ���泣��
	//	//3.14;
	//	//10;
	//	//'a';
	//	//"abcdef";
	//
	//	//2. const���εĳ�����
	//	//const int num = 10;//num���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
	//	//num = 20;
	//	//printf("num = %d\n", num);//20
	//
	//	//int arr[10] = {0};//10��Ԫ��
	//	//
	//	//const int n = 10;
	//	//int arr2[n] = {0};//n�Ǳ����ģ������ǲ���
	//
	//	//3. #define ����ı�ʶ������
	//	//MAX = 20000;//err
	//	/*int n = MAX;
	//	printf("n = %d\n", n);*/
	//
	//
	//	return 0;
	//}

	//�Ա�
	//enum Sex
	//{
	//	//����ö�����͵ı�����δ������ȡֵ
	//	//ö�ٳ���
	//	MALE = 3,//����ֵ
	//	FEMALE,
	//	SECRET
	//};
	//
	//int main()
	//{
	//	//4. ö�ٳ���
	//	//����һһ�оٵĳ���
	//
	//	enum Sex s = MALE;
	//	//MALE = 3;//err
	//	printf("%d\n", MALE);
	//	printf("%d\n", FEMALE);
	//	printf("%d\n", SECRET);
	//
	//	return 0;
	//}

	//�ַ�������һ���ַ� - ��˫������������һ���ַ�
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
//	//�ַ����� - ������һ����ͬ���͵�Ԫ��
//	//�ַ����ڽ�β��λ��������һ��\0���ַ�
//	//\0���ַ����Ľ�����־
//
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	//��һ���ַ����ĳ���
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//string length
//	//printf("%d\n", len);
//
//	//��ӡ�ַ���
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
//	//printf("(are you ok??)");//??) -- ] - ����ĸ��
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
//	//printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ
//
//
//	return 0;
//}
//printf("%d", 100);
//printf("%c", 'a');
//printf("%s", "abc");

//int main()
//{
//	//printf("%c\n", '\130');//8���Ƶ�130��ʮ���ƵĶ����أ�
//	//X   -- ASCII��ֵ��88
//	//printf("%c\n", '\101');//A - 65 - 8�����ǣ�101
//	//printf("%c\n", '\x30');//48 - '0'
//	//printf("%d\n", strlen("abc"));//3
//	
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	return 0;
//}

//
//ע��: ���������͸��Ӵ����
//
//
//int main()
//{
//	//int a = 10; //C++ע�ͷ��
//	/*
//	int b = 0;
//	*/   
//	//C���Ե�ע�ͷ�� - ��֧��Ƕ��ע��
//
//	return 0;
//}

//int main()
//{
//	int input = 0;//�����ֵ
//	printf("�������:>\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{ 
//		printf("������\n");
//	}
//	return 0;
//}

//���� - 30000���� - ��һ������Ĺ���
//
//int main()
//{
//	int line = 0;
//	//ѭ��
//	while(line<30000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��offer\n");
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
//	//�����ķ�ʽ���
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
//	//���� - һ����ͬ���͵�Ԫ�صļ���
//	//10������1-10������
//	//���������±������ʵ�
//	//*
//	// /
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//	////char ch[5] = {'a', 'b', 'c'};//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2;//% - ȡģ���ࣩ
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
//	//0 ��ʾ�٣���0������
//	int a = 0;
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//���aΪ�棬����
//	}
//	if (!a)
//	{
//		//���aΪ�٣�����
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
//	//sizeof��һ��������
//	//���Ǻ���
//	//�������ͻ��߱����Ĵ�С��
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
//	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}

	return 0;
}