#include <stdio.h>

struct point getstruct(void);
void output(struct point p);

struct point
{
    int x;
    int y;
};

int main(int argc,const char *argv[])
{
    struct point a = {0,0};
    a = getstruct();
    output(a);
    return 0;
}

void output(struct point p)
{
    printf("%d,%d",p.x,p.y);
}

struct point getstruct(void)
{
    struct point p;
    printf("pls input the point x,y: ");
    scanf("%d,%d",&p.x,&p.y);
    // printf("%d,%d",p.x,p.y);
    return p;
}