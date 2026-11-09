#include <stdio.h>

int main()
{
	int hour1;
	int hour2;
	int minute1;
	int minute2;
	
	printf("请输入两组时间，例如10 50,11 20以计算时间差\n");
	scanf("%d %d,%d %d",&hour1,&minute1,&hour2,&minute2);
	
	int h_decline = hour2 - hour1;
	int m_decline = minute2 - minute1;
    
	if(m_decline<0){
	 m_decline = m_decline + 60;
	 h_decline --;
	}	
	
	printf("时间差为%d小时%d分钟",h_decline,m_decline);
	return 0;
}
