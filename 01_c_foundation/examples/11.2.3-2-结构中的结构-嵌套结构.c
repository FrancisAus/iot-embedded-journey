#include <stdio.h>

struct point{
    int x;
    int y;
};

struct rectangle{
    struct point pt1;
    struct point pt2;
};

int main(int argc,const char *argv[])
{   
    struct rectangle r = {{1,2},{3,4}};
    struct rectangle *rp;
    rp = &r;

    printf("r.pt1.x=%d\n",r.pt1.x);
    printf("(r.pt1).x=%d\n",(r.pt1).x);
    printf("rp->pt1.x=%d\n",rp->pt1.x);
    printf("(rp->pt1).x=%d\n",(rp->pt1).x);

    return 0;
}