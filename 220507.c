#include <stdio.h> //�ؼ��ֵ�Ӧ��

// typedef ���Ͷ��壬�����ض���
//unsigned int num=20
//typedef unsigned int u_int (unsigned int = u_int���൱�ڼ�д�������ٶ���num2��ʱ��Ϳ�����u_int��)
//u_int num2=20 

//static ��̬,���ξֲ�����ʱ���ֲ����������������ӳ��� 
//           ����ȫ�ֱ���ʱ���ı��˱����������򣬱���ͨ��extern�������Ե����ⲿ���ţ������ⲿ����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�� 
//           ���κ���ʱ���ı��˺����������򣬱���ͨ��extern�������Ե��õĺ���������ֻ���ں����Լ����ڵ�Դ�ļ��ڲ�ʹ�� 


//void test()
//{
//	// int a=1;
//	static int a=1;  //���˸�static��a��ֵ�������ˣ�ǰһ��ѭ��������aֵ�ḳ����һ��ѭ����a 
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//		test(),
//		i++;
//	}
//	return 0;
// } 

 // #define ���峣���ͺ� 
// #define MAX 100
// #define���Զ����-������

Max(int x, int y)  //������ϴ�ֵ 
{
    if (x > y)
        return x;
    else
        return y;
}
#define MAX(X,Y)(X>Y?X:Y) //���������ϴ�ֵ 
int main()
{
    // int a=MAX;
    int a = 10;
    int b = 20;
    int max = Max(a, b);         //���ú��� 
    printf("max=%d\n", max);
    max = MAX(a, b);             //���ú� 
    printf("max=%d\n", max);
    return 0;
}





//�ṹ���������Լ�������һ������
//�ṹ�����.name����ȡ��name��ֵ
//ָ�����->nameҲ����ȡ��name��ֵ 

struct Book  //����һ���ṹ�����ͣ������������۸� 
{
	char name[20]; //������C���Գ�����ơ�
	short price; //�۸�55 
};

int main()
{
	struct Book b = { "C���Գ������", 55 }; //���ṹ���2�����Ը�ֵ 
	struct Book* pb = &b;  //����ָ����� 
	printf("������%s\n", (*pb).name);   //���ýṹ�����.nameȡ��name��ֵ 
	printf("�۸�%dԪ\n", (*pb).price);
	printf("������%s\n", pb->name);      //����ָ�����->nameȡ��name��ֵ 
	printf("�۸�%dԪ\n", pb->price);
	printf("������%s\n", b.name);        //���ýṹ�����.nameȡ��name��ֵ
	printf("�۸�%dԪ\n", b.price);
	strcpy(b.name, "C++"); //�޸�name����string-copy���� 
	b.price = 15; //�޸�price 
	printf("�޸ĺ��������%s\n", b.name);
	printf("�޸ĺ�ļ۸�%dԪ\n", b.price);
	return 0;
}





//ָ��:��һ�ֱ�����������ŵ�ַ�ģ���ָ��������������p������������int* 
// ָ���С��32λ��������4���ֽڣ�64λ��������8���ֽ� 

//int main()
//{
//	int a=10;
//	int* p=&a;          //ȡ��a�ĵ�ַ����*p�� 
//	printf("%p\n", &a); 
//	printf("%p\n", p);
//	*p=20;              //��*p���aֵ��Ϊ20 
//	printf("%d\n",a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc)); //ָ��pc�Ĵ�СΪ8��ϸ�ڣ���Ϊ��������64λ 
	*pc = 'a';                   //��*cp���ֵ��Ϊa
	printf("%c\n", ch);
	return 0;
}