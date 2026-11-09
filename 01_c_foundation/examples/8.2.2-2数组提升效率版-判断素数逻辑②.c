#include <stdio.h>
#define NUM 10		

// 函数声明：isPrime，用来判断 iP_i 是不是素数
// iP_i：待检查的数字
// iP_prime[]：已经找到的素数数组
// iP_cnt：数组里面有效素数的数量

int isPrime(int iP_i,int iP_prime[],int iP_cnt);

int main()
{
	int prime[NUM] = {2};  	// 素数数组，直接先放进去第一个素数 2
	int cnt = 1;			// 现在数组里已有【1个】有效素数（2）
	int i = 3;				// 从3开始往后找下一个素数
	
	{	//输出一个表头[0,NUM-1]
		int i;
		printf("\t\t");
		for ( i=0; i<NUM; i++ ) {
			printf("%d\t", i);
		}
		printf("\n");
	}
	
	// 目标：收集够 NUM=10 个素数，cnt 记录当前已经找到几个
	while(cnt < NUM){
		if(isPrime(i,prime,cnt)){	// 判断i能不能被已知素数整除
			prime[cnt++] = i;		// 如果是素数，存入数组，cnt+1
		}
	
		{	
			printf("i=%d\tcnt=%d\t",i,cnt);
			int i;
			for ( i=0; i<NUM; i++ ) {
			printf("%d\t", prime[i]);	//遍历数组
			}
			printf("\n");
		}
	
		i ++;	// 检查下一个数字
	}
	
	 // 打印循环：输出全部10个素数，每行5个
	for(i=0;i<NUM;i++){
		
		printf("%d",prime[i]);
		if((i+1)%5) printf("\t");	// 不是第5/10/15...个，制表符隔开，同一行
		else printf("\n");			// 是第5、10个，换行
	}
	
	return 0;
}

int isPrime(int iP_i,int iP_prime[],int iP_cnt)
{
	int ret = 1;	// ret=1 默认先假设它是素数
	    // 遍历【已经找到的全部素数】，拿它们试除
	for(int m=0;m<iP_cnt;m++){
		if(iP_i % iP_prime[m] == 0){// 能整除 → 不是素数
			ret = 0;
			break;
		}
	}
	return ret;	// 返回1：素数；返回0：不是素数
}
