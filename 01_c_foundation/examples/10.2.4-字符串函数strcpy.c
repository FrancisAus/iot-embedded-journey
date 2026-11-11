#include <stdio.h>
#include <string.h>

char *mycpy(char *dst,const char *src)
{
    // 数组写法
    // int idx = 0;
    // while(src[idx] != '\0'){
    //     dst[idx] = src[idx];
    //     idx++;
    // }
    // dst[idx] = '\0';
    // return dst;

    // 指针写法
    char *tmp = dst;
    while(*src != '\0'){
        *dst++ = *src++;
    }
    *dst = '\0';
    return tmp;
}
int main(int argc,char const *argv[])
{
    char s1[5] = "";
    char s2[] = "abc";
    mycpy(s1,s2);

    printf("s1=%s\n",s1);
    return 0;
}
