#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("�йز��������\n");
	//ȡģ������
	//����	C4244	����ʼ���� : �ӡ�double��ת������int�������ܶ�ʧ����	
	/*
	int a = 6.0;
	int b = 5.0;
	int num = a % b;//a,b����Ϊ�������ص�������֮���������
	printf("%d\n",num);
	return 0;
	*/
	//��λ������
	/*
	int num = 10;
	int c = num << 1;//c���ڵ����壺numû����ֵǰ��������仯��
	num = -1;
	c = num << 1;

	����	C4293	�� >> ��: Shift ����Ϊ�����������Ϊδ����	
	c = num >> -1;
	printf("%d", c);
	*/
	//λ������
	//�����ܴ�����ʱ��������������������ʵ���������Ľ���
	
	/*int a = 1;
	int b = 2;
	//�Ӽ��� 
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d,%d", a, b);
	//��λ���(ͬ0��1)
	a  00000000 00000000 00000000 00000001
	b  00000000 00000000 00000000 00000010
	   
	a 	00000000 00000000 00000000 00000011 
	b   00000000 00000000 00000000 00000001 
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d,%d", a, b);
	*/
	//��һ�������������ڴ��еĶ�������ʽ��1�ĸ���
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
	//�߼�������
	//360������
	/*
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//���ʽ�ӳ���,����ֹͣ����
	i = a++ || ++b || d++;//�ұ�ʽ�Ӳ�����,����ֹͣ����
	printf(" % d % d % d % d", a, b, c, d);
	*/
	//�����Լ�
	/*
	int a=5,b=3,d;
	printf("%d%d%d", a++,++a,b++);
	printf("%d", b);
	*/
	------------------------------------------------------------------------------------------------
		//���ϴ���
		//int main()
		//{
		//	//int a = 6 / 5;//0.6
		//	//printf("%d\n", a);
		//
		//	//float a = 6 / 5;
		//	//printf("%f\n", a);
		//
		//	float a = 6.0 / 5.0;
		//	printf("%f\n", a);
		//
		//	return 0;
		//}


		//int main()
		//{
		//	int a = 7 % 3;//
		//	printf("%d\n", a);
		//
		//	return 0;
		//}
		//
		//int main()
		//{
		//	int a = 2;
		//	//��a�Ķ�����λ�����ƶ�һλ
		//	int b = a << 1;
		//
		//	printf("b = %d\n", b);
		//
		//	return 0;
		//}


		//int main()
		//{
		//	int a = 10;
		//
		//	//��a�Ķ�����λ�����ƶ�1λ
		//	int b = a >> 1;
		//
		//	printf("a = %d\n", a);
		//	printf("b = %d\n", b);
		//
		//	return 0;
		//}


		//int main()
		//{
		//	int a = -1;
		//	//��a�Ķ�����λ�����ƶ�1λ
		//	int b = a >> 1;
		//	//��ǰ�����Ʋ�����ʹ�õģ���������
		//	printf("b = %d\n", b);
		//
		//	return 0;
		//}
		//


		//int main()
		//{
		//	int a = 10;
		//	int b = a << -5;//
		//
		//	return 0;
		//}
		//



		//
		//int main()
		//{
		//	int a = 3;
		//	int b = 5;
		//
		//	//^  - ����2���ƣ�λ���
		//	//��Ӧ�Ķ�����λ�������
		//	//������ͬΪ0������Ϊ1
		//
		//	int c = a ^ b;
		//	printf("%d\n", c);
		//
		//	//00000000000000000000000000000011
		//	//00000000000000000000000000000101
		//	//00000000000000000000000000000110
		//	//6
		//
		//
		//	//  | - ����2���ƣ�λ��
		//	//int c = a | b;
		//	//printf("%d\n", c);
		//
		//	//00000000000000000000000000000011
		//	//00000000000000000000000000000101
		//	//00000000000000000000000000000111
		//	
		//	 
		//	// 
		//	//& -  ����2���ƣ�λ��
		//	//int c = a & b;
		//	//printf("c = %d\n", c);
		//	//
		//	//00000000000000000000000000000011
		//	//00000000000000000000000000000101
		//	//00000000000000000000000000000001
		//	//
		//}


		//
		//int main()
		//{
		//	int a = 3;
		//	int b = 5;
		//	//����
		//	// 
		//	printf("a=%d b=%d\n", a, b);
		//	a = a ^ b;
		//	b = a ^ b;
		//	a = a ^ b;
		//	printf("a=%d b=%d\n", a, b);
		//
		//	//printf("a = %d b = %d\n", a, b);
		//	////��ֵ̫������
		//	//a = a + b;
		//	//b = a - b;
		//	//a = a - b;
		//	//printf("a = %d b = %d\n", a, b);
		//
		//	//int c = 0;//��ƿ
		//	//printf("a = %d b = %d\n", a, b);
		//	//c = a;
		//	//a = b;
		//	//b = c;
		//	//printf("a = %d b = %d\n", a, b);
		//
		//	return 0;
		//}
		//
		//int main()
		//{
		//	int a = 3;
		//	//a ^ a = 0;
		//	//0 ^ a = a;
		//	//000
		//	//011
		//	//011
		//	//
		//	//011
		//	//011
		//	//000
		//	return 0;
		//}


		////
		//int main()
		//{
		//	int a = 13;
		//	//00000000000000000000000000001101
		//	//00000000000000000000000000000001
		//	//00000000000000000000000000000001
		//	//& >>
		//
		//	return 0;
		//}
		//
		//int main()
		//{
		//	int a = 13;
		//	//��a�Ķ������еĵ�5λ�ó�1
		//	a = a | (1 << 4);
		//	printf("a = %d\n", a);//29
		//	//��a�Ķ������еĵ�5λ�ó�0
		//	a = a & ~(1 << 4);
		//	printf("a = %d\n", a);//13
		//
		//	//
		//	//00000000000000000000000000001101
		//	//00000000000000000000000000010000
		//	//00000000000000000000000000011101
		//	// 	                          
		//	//1<<4
		//	//00000000000000000000000000000001
		//
		//	//00000000000000000000000000011101
		//	//11111111111111111111111111101111
		//	//00000000000000000000000000010000
		//	//00000000000000000000000000001101
		//	//1<<4
		//	return 0;
		//}


		//
		//int main()
		//{
		//	int a = 10;
		//	a = 100;
		//	a = a + 100;//1
		//	a += 100;   //2
		//	a = a >> 3;
		//	a >>= 3;
		//
		//	return 0;
		//
		// 
		//=  -- ��ֵ
		//== -- �ж�
		//
		//int main()
		//{
		//	int flag = 0;
		//	printf("%d\n", !flag);//
		//
		//	//flagΪ�棬��ӡhehe
		//	//if (flag)
		//	//{
		//	//	printf("hehe\n");
		//	//}
		//	////flagΪ��,��ӡhaha
		//	//if (!flag)
		//	//{
		//	//	printf("haha\n");
		//	//}
		//	return 0;
		//}

		//��Ŀ������ - ֻ��һ��������
		//
		//int main()
		//{
		//	int a = 10;
		//	a = -a;
		//	printf("%d\n", a);
		//	return 0;
		//}

		//
		//int  main()
		//{
		//	short s = 5;
		//	int a = 10;
		//	printf("%d\n", sizeof(s = a + 2));//
		//	printf("%d\n", s);//
		//
		//	//int a = 10;
		//	//int arr[10] = { 0 };
		//	//printf("%d\n", sizeof(arr));//��λ���ֽ�
		//	//printf("%d\n", sizeof(int [10]));//40 - int [10]��arr���������
		//
		//
		//	//printf("%d\n", sizeof(a));//����a��ռ�ռ�Ĵ�С����λ���ֽ�
		//	//printf("%d\n", sizeof(int));
		//	//printf("%d\n", sizeof a);
		//	//sizeof��һ�������������Ǻ���
		//
		//	return 0;
		//}

		//
		//int main()
		//{
		//	int a = -1;
		//	//10000000000000000000000000000001 - ԭ��
		//	//11111111111111111111111111111110 - ����
		//	//11111111111111111111111111111111 - ����
		//	//~ ��λȡ��
		//	//11111111111111111111111111111111
		//	//00000000000000000000000000000000
		//	//
		//	int b = ~a;
		//	printf("%d\n", a);
		//	printf("%d\n", b);
		//
		//	return 0;
		//}

		//
		//int main()
		//{
		//	int a = 10;
		//	printf("%d\n", a--);//10
		//	printf("%d\n", a);//9
		//
		//	//int b = a++;//����++����ʹ�ã���++
		//	//int b = ++a;//ǰ��++��  ��++����ʹ��
		//
		//	//int b = a--;//����--����ʹ�ã���--
		//	//int b = --a;
		//	//printf("%d\n", a);//
		//	//printf("%d\n", b);//
		//
		//	return 0;
		//}
		//
		//
		//
		//#include <stdio.h>
		//
		//int main()
		//{
		//	int a = 1;
		//	int b = (++a) + (++a) + (++a);
		//	printf("%d\n", b);
		//
		//	return 0;
		//}
		//
		//
		//int main()
		//{
		//	int a = 10;
		//	printf("%p\n", &a);//& - ȡ��ַ������
		//	int * pa = &a;//pa��������ŵ�ַ�� - pa����һ��ָ�����
		//	*pa = 20;//* - �����ò����� - ��ӷ��ʲ�����
		//	printf("%d\n", a);//20
		//
		//	return 0;
		//}
		//

		//
		//int main()
		//{
		//	int a = (int)3.14;
		//
		//	return 0;
		//}
		//

		//
		//int main()
		//{
		//	int a = 3;
		//	int b = 5;
		//	//if (a == b)
		//	//if(a != b)
		//	//if(a>b)
		//	//if(a < b)
		//	if(a <= b)
		//	{
		//
		//	}
		//	return 0;
		//}
		// = ��ֵ == �ж����

		//== 
		//�Ƚ�2���ַ������ ����ʹ�� == 
		//

		//int main()
		//{
		//	int a = 3;
		//	int b = 5;
		//	//if (a && b)
		//	if(a || b)
		//	{
		//		printf("hehe\n");
		//	}
		//	return 0;
		//}

#include <stdio.h>

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//
//    i = a++ || ++b || d++;
//    printf("a = %d\nb = %d\nc = %d\nd =%d\n", a, b, c, d);
//
//    return 0;
//}
//
//
//
//
//
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//
//	//��Ŀ������
//	b = (a > 5 ? 1 : -1);
//	return 0;
//}

int main()
	{
		int a = 3;
		int b = 5;
		int c = 0;
		//���ű��ʽ - Ҫ�����������μ��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ��

		int d = (c = 1, a = c + 3, b = a - 4, c += b);

		//c=10  a=8         b=4    
		printf("%d\n", d);

		return 0;
	}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1     4
//	printf("%d\n", arr[4]);//[] - �����±����ò�����
//	//[] �Ĳ�������2����arr , 4
//	// 
//	//3+5��
//	return 0;
//}

//�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������
//	int ret = Add(a, b);//() - �������ò�����
//	test();
//
//	return 0;
//}

//�ṹ��Ա���ʲ�����
//.
//->

//�ṹ��
//
//int float char short 
//double long 
//
//�飺��������ţ�����
//�ˣ����֣����䣬�Ա�
//

//������һ���Զ��������
//struct Book
//{
//	//�ṹ��ĳ�Ա��������
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//int num = 10;
//	//�ṹ�������.��Ա��
//	struct Book b = {"C����", "C20210509", 55};
//	struct Book * pb = &b;
//
//	//�ṹ��ָ��->��Ա��
//	printf("������%s\n", pb->name);
//	printf("��ţ�%s\n", pb->id);
//	printf("���ۣ�%d\n", pb->price);
//
//	//printf("������%s\n", (*pb).name);
//	//printf("��ţ�%s\n", (*pb).id);
//	//printf("���ۣ�%d\n", (*pb).price);
//
//	//printf("������%s\n", b.name);
//	//printf("��ţ�%s\n", b.id);
//	//printf("���ۣ�%d\n", b.price);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//	return 0;
//}
//
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	//-126
//	//����a��b����char���͵ģ���û�дﵽһ��int�Ĵ�С
//	//����ͻᷢ����������
//
//	printf("%d\n", c); //-126
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}

//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//4 gcc - 4
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	short s = 5;
//	sizeof(s = a + 3);
//	a + b;//ֵ���ԣ��������� int
//	return 0;
//}

//
//
//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//	return 0;
//}
//
//
//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//���ȼ������˼���˳��
//	int c = a + b + 7;//���ȼ��������ã�����Ծ����ˣ�˳��
//
//	return 0;
//}
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    //2-3*4 = -10
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//������٣�
//    return 0;
//}
//


//int main()
//{
//	int i = 1;
//
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//
//	return 0;
//}

//VS  - 12
//gcc - 10

//��ҵ���ϣ�

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));//4*4=16
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    //[hello bit\0]
//    printf("%d %d\n", sizeof(str), strlen(str));
//    //10 9
//    //strlen - ����-���ַ������ȵģ���\0֮ǰ���ֵ��ַ�����
//    //sizeof - ������-�������/������ռ�ڴ��С����λ���ֽ�
//
//    char acX[] = "abcdefg";//a b c d e f g \0
//    char acY[] = {'a','b','c','d','e','f','g' };
//
//        //A.����acX������acY�ȼ� no
//        //B.����acX������acY�ĳ�����ͬ no
//        //C.����acX�ĳ��ȴ�������acY�ĳ��� yes
//        //D.����acX�ĳ���С������acY�ĳ��� no
//    //int a[2][] = { {0,1,2},{3,4,5} };//no
//    //int a[][3] = { {0,1,2},{3,4,5} };//yes
//   // int a[2][4] = { {0,1,2},{3,4},{5} };//no
//    //int a[][3] = { {0,,2},{},{3,4,5} };//no
//
//    return 0;
//}
//


//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}
//


//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	//int arr3[5] = {0};
//	//��������������Ԫ�صĵ�ַ - 0x0012ff44
//	//3 = 5;//err
//	/*arr3 = arr1;
//	arr1 = arr2;
//	arr2 = arr3;*/
//
//	return 0;
//}
//
//
//


//int main()
//{
//	int a = 10;//aռ4���ֽ� - 
//	int * pa = &a;//�õ�����a��4���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//
//	return 0;
//}


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}


//ָ�����͵�����
//1. ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2. ָ�����;����ˣ�ָ����һ�������߶�Զ��������
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int  *p = arr;
//	char *pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f
//	//11111111
//	//    8421
//	//
//	/*int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;*/
//
//	//int* pa = &a;
//	//*pa = 0;
//	
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}


}