#include <stdio.h>

int gAll = 12;
int f(void);

int main(int argc,const char* argv[])
{
    printf("1st time in %s,gAll = %d\n",__func__,gAll);
    f();
    printf("2nd time in %s,gAll = %d\n",__func__,gAll);
    return 0;
}

int f(void)
{
    printf("1st time in %s,gAll = %d\n",__func__,gAll);
    gAll += 2;
    printf("2nd time in %s,gAll = %d\n",__func__,gAll);
    return gAll;
}