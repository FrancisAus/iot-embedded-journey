#include <stdio.h>

int main()
{
	int input;
	printf("请输入[0,153]的整数，保证能转回有效的BCD数\n");
	scanf("%d",&input);
	
	printf("%x",input);
	
	return 0;
}
