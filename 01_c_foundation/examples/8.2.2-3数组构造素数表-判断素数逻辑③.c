#include <stdio.h>

int main()
{
	int n = 100;
	int prime[n];
	
	//始化为1
	for(int i=0;i<n;i++){
		prime[i] = 1;
	}
	
	for(int x=2;x<n;x++){
		if(prime[x] == 1){//x是素数
			
			//把x的倍数标记成0
			for(int i=2;i*x<n;i++){
				prime[i*x] = 0;
			}
		}
	}
	
	for(int i=2;i<n;i++){
		if(prime[i] == 1){
			printf("%d\t",i);	
		}
	}
	
	return 0;
}
