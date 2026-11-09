#include <stdio.h>

int main()
{
	int begin = 0;
	int duration =0;
	printf("请输入起始时间空格流逝时间\n");
	scanf("%d %d",&begin,&duration);
	
	int all_minute = (begin/100)*60 + (begin%100) + duration;
	int ans = (all_minute/60)*100 +(all_minute%60);
	printf("终止时间为%d",ans);
	
	return 0;
	
}
