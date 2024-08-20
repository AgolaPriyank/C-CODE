#include <stdio.h>
int a=5;
void fun1();
void fun2();
void main()
{
    int a=20;
    printf("in main fancation");
    printf("\na = %d\n", a);
    fun1();
    fun1();
    fun2();
    fun2();
}

void fun1()
{
    int b=10;
    printf("in fun1");
    printf("\na= %d  b= %d\n", a,b);
    b=b+5;
}

void fun2()
{
    static int b=10;
    printf("in fun2");
    printf("\na = %d  b = %d\n", a,b);
    b=b+5;
}