#include <stdio.h>

#define cube(x) (x*x*x)
#define RADTODEG(x) ((x) * 57.29578)

int main(void)
{
    printf("cube() = %f\n",cube(5));
    printf("R(5+2) = %f\n",RADTODEG(5+2));
    printf("1/R(1) = %f\n",1 / RADTODEG(1));

    return 0;
}