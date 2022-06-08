#include <stdio.h> //关键字的应用

// typedef 类型定义，类型重定义
//unsigned int num=20
//typedef unsigned int u_int (unsigned int = u_int，相当于简写，下面再定义num2的时候就可以用u_int了)
//u_int num2=20 

//static 静态,修饰局部变量时，局部变量的生命周期延长了 
//           修饰全局变量时，改变了变量的作用域，本来通过extern声明可以调用外部符号，现在外部符号只能在自己所在的源文件内部使用 
//           修饰函数时，改变了函数的作用域，本来通过extern声明可以调用的函数，现在只能在函数自己所在的源文件内部使用 


//void test()
//{
//	// int a=1;
//	static int a=1;  //加了个static，a的值不销毁了，前一次循环结束的a值会赋给下一次循环的a 
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

 // #define 定义常量和宏 
// #define MAX 100
// #define可以定义宏-带参数

Max(int x, int y)  //函数求较大值 
{
    if (x > y)
        return x;
    else
        return y;
}
#define MAX(X,Y)(X>Y?X:Y) //定义宏来求较大值 
int main()
{
    // int a=MAX;
    int a = 10;
    int b = 20;
    int max = Max(a, b);         //调用函数 
    printf("max=%d\n", max);
    max = MAX(a, b);             //调用宏 
    printf("max=%d\n", max);
    return 0;
}





//结构体是我们自己创建的一种类型
//结构体变量.name可以取出name的值
//指针变量->name也可以取出name的值 

struct Book  //创建一个结构体类型，包含书名，价格 
{
	char name[20]; //书名《C语言程序设计》
	short price; //价格55 
};

int main()
{
	struct Book b = { "C语言程序设计", 55 }; //给结构体的2个属性赋值 
	struct Book* pb = &b;  //定义指针变量 
	printf("书名：%s\n", (*pb).name);   //利用结构体变量.name取出name的值 
	printf("价格：%d元\n", (*pb).price);
	printf("书名：%s\n", pb->name);      //利用指针变量->name取出name的值 
	printf("价格：%d元\n", pb->price);
	printf("书名：%s\n", b.name);        //利用结构体变量.name取出name的值
	printf("价格：%d元\n", b.price);
	strcpy(b.name, "C++"); //修改name，用string-copy函数 
	b.price = 15; //修改price 
	printf("修改后的书名：%s\n", b.name);
	printf("修改后的价格：%d元\n", b.price);
	return 0;
}





//指针:有一种变量是用来存放地址的，叫指针变量，如下面的p，它的类型是int* 
// 指针大小在32位机器上是4个字节，64位机器上是8个字节 

//int main()
//{
//	int a=10;
//	int* p=&a;          //取出a的地址存入*p里 
//	printf("%p\n", &a); 
//	printf("%p\n", p);
//	*p=20;              //把*p里的a值改为20 
//	printf("%d\n",a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc)); //指针pc的大小为8个细节，因为本机器是64位 
	*pc = 'a';                   //把*cp里的值改为a
	printf("%c\n", ch);
	return 0;
}