#include <stdio.h>

int main()
{
	const int MONEY = 0;
	int amount = 100;
	int price = 0;
	
	printf("请输入金额\n");
	scanf("%d",&price);
	
	printf("请输入付款票面\n");
	scanf("%d",&amount);
	
	int change = MONEY + amount - price;
	
	printf("找您%d元\n",change);
	
	return 0;
}
