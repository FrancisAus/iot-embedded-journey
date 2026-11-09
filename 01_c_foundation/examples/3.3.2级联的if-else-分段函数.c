#include <stdio.h>

int main()
{
	int x,f;
	
	printf("请输入自变量x\n");
	scanf("%d",&x);
	
	if(x<0) {
		f = -1;
	} else if(x==0) {
		f = 0;
	} else {
		f = 2*x;
	}
		
	printf("分段函数的输出结果为%d",f);
	
	return 0;
	
}
