#include <stdio.h>

int main()
{
	int x,f;
	
	printf("请输入自变量x\n");
	scanf("%d",&x);
	
	switch(x<0) {
		case 1:
			f = -1;
			break;
        default:
		    f = 2*x;
		    break;
	}
		
	printf("分段函数的输出结果为%d",f);
	
	return 0;
	
}
