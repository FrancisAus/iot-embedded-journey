#include <stdio.h>

int main(void)
{
	char *mon[] = {
		"",
		"January",
		"February",
		"March",
		"April",
		"May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
	};
	
	int month;
	
	printf("请输入数字月份:");
	scanf("%d",&month);
	
	if(month>0 && month <=12){
		printf("%s",mon[month]);
	} else {
		printf("invalid input");
	}
	
	return 0;
}
