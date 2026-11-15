#include <stdio.h>

struct point *getstruct(struct point *p);
void output(struct point p);
void print(const struct point *p);

struct point
{
    int x;
    int y;
};

int main(int argc,const char *argv[])
{
    struct point a = {0,0};
    //A
    getstruct(&a);
    output(a);
    
    //B
    // output(*getstruct(&a));
    //先调用getstruct，scanf输入，返回&a。
    //再解引用，拿出a这个结构体，拷贝给output

    //C
    // print(&a);

    //D
    // getstruct(&a)->x=0;
    //先调用 getstruct 输入数据到 a，然后把 a 里面的 x 改成 0。
    // *getstruct(&a)=(struct point){1,2};
    // output(a);
    //先让你输入一组坐标，然后直接把 a 强制改成 `{1,2}`，最后输出 1,2.
    return 0;
}

void output(struct point p)
{
    printf("%d,%d",p.x,p.y);
}

struct point *getstruct(struct point *p)
{
    
    printf("pls input the point x,y: ");
    scanf("%d,%d",&p->x,&p->y);
    // printf("%d,%d",p.x,p.y);
    return p;
}

void print(const struct point *p)//只读，不希望作出改动
{
    printf("%d,%d",p->x,p->y);
}