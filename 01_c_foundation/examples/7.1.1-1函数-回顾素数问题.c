#include <stdio.h>

int main()
{
	int m,n;
	int cnt=0;
	int sum=0;
	
	m=10,n=31;
	//scanf("%d %d",&m,&n);
	if(m==1)m=2;
	
	for(int i=m;i<=n;i++){
		int isPrime=1;
		
		for(int k=2;k<i;k++){
			if(i%k==0){
				isPrime=0;
			}
		}
		
		if(isPrime==1){
			printf("%d ",i);
			cnt++;
			sum+=i;
		}
	}
	
	printf("\ncnt==%d,sum==%d\n",cnt,sum);
	return 0;
}
