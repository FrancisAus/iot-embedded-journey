#include <stdio.h>

int main()
{
	int pay = 0;
	int price = 0;
	
	printf("请输入金额\n");
	scanf("%d",&price);
	
	printf("请输入付款票面\n");
	scanf("%d",&pay);
	
	if(pay>=price){
		int change = pay - price;
		
		printf("找您%d元\n",change);
	} else{
		int decline = price - pay;
		printf("差钱%d\n",decline);
	}

	return 0;
}
