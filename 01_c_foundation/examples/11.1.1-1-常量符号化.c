#include <stdio.h>

#define red    0
#define yellow 1
#define green  2

int main(int argc, const char* argv[])
{
    int color = -1;
    char* colorname = NULL;

    printf("input a color number (0:red, 1:yellow, 2:green): ");
    scanf("%d", &color);

    switch(color)
    {
        case red: colorname = "red";break;
        case yellow: colorname = "yellow";break;
        case green: colorname = "green";break;

        default: colorname = "unknown";break;
    }
    printf("%d matches color %s\n", color, colorname);
    return 0;
}