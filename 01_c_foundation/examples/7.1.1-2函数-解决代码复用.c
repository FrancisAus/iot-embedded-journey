#include <stdio.h>

int isPrime(int i)
{
	int ret=1;
	for(int k=2;k<i;k++){
		if(i%k==0){
			ret=0;
		}
	}
	return ret;//函数返回值是ret
}

int main()
{
	int m,n;
	int cnt=0;
	int sum=0;
	
	m=10,n=31;
	//scanf("%d %d",&m,&n);
	if(m==1)m=2;
	
	for(int i=m;i<=n;i++){
		if(isPrime(i)){
			printf("%d ",i);
			cnt++;
			sum+=i;
		}
	}
	
	printf("\ncnt==%d,sum==%d\n",cnt,sum);
	return 0;
}
