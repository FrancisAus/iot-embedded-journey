#include <stdio.h>

int main()
{
	int input;
 	int times=0;

 	printf("请输入数字以确认几位整数\n");
	scanf("%d",&input);
	
	do{
		times++;
		input/=10;
	}while(input>0);
	 
	printf("%d",times);	
	return 0;
}
