#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,const char *argv[])
{
    char s[] = "Hello";
    char *p = strchr(s,'l');
    //如何找到第一个'l'字符
    //printf("s=%s\n",p);
    
    //如何找到第二个'l'字符
    //p=strchr(p+1,'l');
    //printf("s=%s\n",p);

    //如何将所得字符串复制到新的内存空间中
    char *t = (char *)malloc(strlen(p)+1);
    strcpy(t,p);
    printf("t=%s\n",t);
    free(t);

    //如何截断字符串并留下目标字符前的内容
    // char c = *p;
    // *p = '\0';
    // printf("s=%s\n",s);
    // *p = c;

    return 0;
}