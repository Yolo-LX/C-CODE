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

		//F11 - �����
		//F10 - �����


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



		//д���뽫�������������Ӵ�С�����
		//
		//int main()
		//{
		//	int a = 0;
		//	int b = 0;
		//	int c = 0;
		//	//����
		//	scanf("%d%d%d", &a, &b, &c);
		//	//����˳��
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
		//	//��� - ��С
		//	printf("%d %d %d\n", a, b, c);
		//	return 0;
		//}


		//дһ�������ӡ1 - 100֮������3�ı���������
		//
		//int main()
		//{
		//	int i = 0;
		//	//for (i = 1; i <= 100; i++)
		//	//{
		//	//	//�ж�i�Ƿ�Ϊ3�ı���
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


		//���������������������������Լ��

		//
		//int main()
		//{
		//	int m = 0;
		//	int n = 0;
		//	scanf("%d%d", &m, &n);//24 18
		//	int max = 0;
		//	//�������Լ��max����m��n�Ľ�Сֵ
		//	if (m > n)
		//		max = n;
		//	else
		//		max = m;
		//	
		//	while (1)
		//	{
		//		if (m % max == 0 && n % max == 0)
		//		{
		//			printf("���Լ�����ǣ�%d\n", max);
		//			break;
		//		}
		//		max--;
		//	}
		//
		//	return 0;
		//}
		//
		//

		//շת�����

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
		//	printf("���Լ����%d\n", n);
		//
		//	//��С������ = m*n/���Լ��;
		//
		//	return 0;
		//}

		//��ӡ1000�굽2000��֮�������

		//int main()
		//{
		//	int y = 0;
		//	int count = 0;
		//	for (y = 1000; y <= 2000; y++)
		//	{
		//		//�ж�y�ǲ�������
		//		//1. ��4���������ܱ�100����������
		//		//2. �ܱ�400����������
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
		//		//�ж�y�ǲ�������
		//		//1. ��4���������ܱ�100����������
		//		//2. �ܱ�400����������
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



		//дһ�����룺��ӡ100~200֮�������
		//���� - ����
		//ֻ�ܱ�1������������
		//
		//int main()
		//{
		//	int i = 0;
		//	for (i = 100; i <= 200; i++)
		//	{
		//		//�ж�i�Ƿ�Ϊ����
		//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
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
		//			printf("%d ", i);//����
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
		//		//�ж�i�Ƿ�Ϊ����
		//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
		//		int j = 0;
		//		int flag = 1;//����i��������
		//		for (j = 2; j < i; j++)
		//		{
		//			if (i % j == 0)
		//			{
		//				flag = 0;//��������
		//				break;
		//			}
		//		}
		//		//
		//		if (flag == 1)
		//		{
		//			count++;
		//			printf("%d ", i);//����
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
		//	//a��b��һ��������һ�������� <= ��ƽ��m��
		//	//16 = 2*8 = 4*4
		//
		//	//sqrt - �ǿ�ƽ���ĺ��� - math.h
		//	for (i = 100; i <= 200; i++)
		//	{
		//		//�ж�i�Ƿ�Ϊ����
		//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
		//		int j = 0;
		//		int flag = 1;//����i��������
		//		for (j = 2; j <= sqrt(i); j++)
		//		{
		//			if (i % j == 0)
		//			{
		//				flag = 0;//��������
		//				break;
		//			}
		//		}
		//		//
		//		if (flag == 1)
		//		{
		//			count++;
		//			printf("%d ", i);//����
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
		//	//a��b��һ��������һ�������� <= ��ƽ��m��
		//	//16 = 2*8 = 4*4
		//
		//	//sqrt - �ǿ�ƽ���ĺ��� - math.h
		//	for (i = 101; i <= 200; i+=2)
		//	{
		//		//�ж�i�Ƿ�Ϊ����
		//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
		//		int j = 0;
		//		int flag = 1;//����i��������
		//		for (j = 2; j <= sqrt(i); j++)
		//		{
		//			if (i % j == 0)
		//			{
		//				flag = 0;//��������
		//				break;
		//			}
		//		}
		//		if (flag == 1)
		//		{
		//			count++;
		//			printf("%d ", i);//����
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

		//�ػ�����
		//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ�!
		//
		//shutdown -s -t 60
		//shutdown -a
		//
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system()- ִ��ϵͳ�����
//
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
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
//	//�ػ�
//	//C�����ṩ��һ��������system()- ִ��ϵͳ�����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system - stdlib.h
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//string.h
//		if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}


//goto ���ֻ����һ��������Χ����ת�����ܿ纯��
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
//	printf("%s", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
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