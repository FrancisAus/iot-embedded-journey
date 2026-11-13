#include <stdio.h>

enum color {red,yellow,green};

void f(enum color output);

int main(int argc, const char *argv[])
{
    enum color input = 0;
    printf("input a color number (0:red, 1:yellow, 2:green): ");
    scanf("%d",&input);

    f(input);

    return 0;
}

void f(enum color output)
{
    //switch语句中使用枚举类型
    // char* colorname = NULL;
    // switch(output)
    // {
    //     case red: colorname = "red";break;
    //     case yellow: colorname = "yellow";break;
    //     case green: colorname = "green";break;

    //     default: colorname = "unknown";break;
    // }
    // printf("colorname=%s\n",colorname);

    //字符串数组语句中使用枚举类型
    char *colorname[] = {"red","yellow","green"};
    if(output>=0 && output<3)
    {
        printf("colorname=%s\n",colorname[output]);
    }
    else
    {
        printf("colorname=unknown\n");
    }
    
}