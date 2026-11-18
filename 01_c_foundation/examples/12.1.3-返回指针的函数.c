#include <stdio.h>

int* f(int *p);
int g();

int main(int argc,const char* argv[])
{
    int newarea;
    int *p = f(&newarea);
    printf("*p = %d\n",*p);
    g();
    printf("*p = %d(After g())\n",*p);

    return 0;
}

int* f(int *p)
{
    *p = 12;
    return p;
}

int g()
{
    int k = 24;
    printf("k = %d\n",k);
}