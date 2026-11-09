#include <stdio.h>

int main()
{
	int initial = 0;
	
	printf("请输入三位数\n");
	scanf("%d",&initial);
	
	int a = initial/100;
	int b = initial/10 - a*10;
	int c = initial%10;
		
	int answer = c * 100 + b * 10 + a;
	printf("其逆序答案是：%d",answer);
	
	return 0;
	
}
