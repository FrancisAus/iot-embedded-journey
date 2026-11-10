#include <stdio.h>

int main()
{
	int num;
	int medium;
	int ans=0;
	
	printf("input the num\n");
	scanf("%d",&num);
	
	while(num>0){
		medium = num%10;
		ans = medium + ans*10;
		num /= 10;
	}
	printf("the ans=%d",ans);
	
	return 0;
}
