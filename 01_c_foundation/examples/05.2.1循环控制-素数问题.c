#include <stdio.h>

int main()
{
	int x;
	int isPrime=1;
	
	scanf("%d",&x);
	
	for(int i=2;i<x;i++){
		if(x % i == 0){
			isPrime = 0;
			break;//写在if内部，从而跳出for循环
		}
	}
	
	
    if(isPrime==0){
		printf("非素数");
	} else {
		printf("素数");
	}
    return 0;
}
