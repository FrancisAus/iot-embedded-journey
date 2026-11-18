#include <stdio.h>

int f(void);

int gAll = 12;

int main(int argc,const char* argv[])
{
    f();
    // f();
    // f();

    return 0;
}

int f(void)
{
    int b =0;
    static int a = 1;
    printf("&gAll\t is %p\n",&gAll);
    printf("&a\t is %p\n",&a);
    printf("&b\t is %p\n",&b);
    printf("1st:a = %d in %s\n",a,__func__);
    a += 2;
    printf("2nd:a = %d in %s\n",a,__func__);
    return a;
}