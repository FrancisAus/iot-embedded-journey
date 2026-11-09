#include <stdio.h>

void sum(int begin,int end)
{
	int total=0;
	for(int i=begin;i<=end;i++){
		total+=i;
	}
	printf("%d+...+%d=%d\n",begin,end,total);
}

int main()
{
	sum(1,10);
	sum(20,30);
	sum(35,45);
	
	return 0;
}
