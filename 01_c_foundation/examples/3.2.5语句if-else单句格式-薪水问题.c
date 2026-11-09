#include <stdio.h>

int main()
{
	const double RATE = 8.25;
	const int STANDARD = 40;
	
	int hours;
	double pay;
	
	printf("请输入工作小时数\n");
	scanf("%d",&hours);
	
	if(hours>STANDARD)
	    pay = STANDARD*RATE + (hours-STANDARD)*(RATE*1.5);
	else
	    pay = hours*RATE;
	
	printf("%f",pay);
	return 0;
}
