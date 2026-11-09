#include <stdio.h>

int main()
{
	int A;
	int B;
	
	printf("请任意输入两个整数,"
	"并用空格将其隔开\n");
	scanf("%d %d",&A,&B);
	
	printf("%d + %d = %d\n",A,B,A+B);
	printf("%d - %d = %d\n",A,B,A-B);
	printf("%d * %d = %d\n",A,B,A*B);
	printf("%d / %d = %d\n",A,B,A/B);
	
	return 0;
	
}
