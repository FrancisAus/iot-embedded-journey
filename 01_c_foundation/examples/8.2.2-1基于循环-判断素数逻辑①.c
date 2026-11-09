#include <stdio.h>
//#include <math.h>

int isPrime();

int main()
{
	int x;
	scanf("%d",&x);
	
	if(isPrime(x)){
		printf("%d是素数\n",x);
	} else {
		printf("%d不是素数\n",x);
	}	
	return 0;	
}

int isPrime(int x)
{
	int ret = 1;
//	if(x == 1){
//		ret = 0;
//	}
//	for(int i=2;i<x;i++){
//		if(x % i == 0){
//			ret = 0;
//			break;
//		}
//	}
	if(x == 1 || (x % 2 ==0 && x != 2)){//for循环中去除偶数版，减少循环次数
		ret = 0;
	} 
	for(int i=3;i<x;i += 2){//或调用平方根函数i<x换为i<=sqrt(x)
		if(x % i == 0){
			ret = 0;
			break;
		}
	}
	
	return ret;
}
