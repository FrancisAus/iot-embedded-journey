#include <stdio.h>

int main()
{
	//枚举：
	int a,b;
	int ret;
	int min;
	
	scanf("%d %d",&a,&b);
	
	if(a<b){
		min = a;
	} else {
		min = b;
	}
	
	for(int i=1;i<=min;i++){
		if(a%i==0){
			if(b%i==0){
				ret = i;
			}
		}
	}
	printf("gcd of %d & %d is %d",a,b,ret);
	
	return 0;
}
