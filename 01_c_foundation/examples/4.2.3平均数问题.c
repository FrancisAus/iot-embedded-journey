#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	int count = 0;
	
	printf("input num£¬input -1 can end the caculation\n");
	scanf("%d",&num);
	
	while(num != -1){
		sum += num;
		count ++;
		
		printf("average = %f\n",1.0*sum/count);
		
		printf("input num\n");
		scanf("%d",&num);
	}
	
	return 0;
}
