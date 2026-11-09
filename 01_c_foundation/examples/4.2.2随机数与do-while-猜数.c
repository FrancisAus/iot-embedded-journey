#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
    int count = 0;
    int a;
    
    //int number =26;
    
    printf("我已经想好了一个数字\n");
   
    do{
		printf("这是个1~100数字，快来猜猜吧\n");
		scanf("%d",&a);
		count ++;
		    
		if(a>number){
			printf("大了哟\n");
		} else if(a<number){
			printf("小了哟\n");
		}
	}while(a != number);
	
	printf("猜对了,你用了%d次就猜对了答案%d\n",count,number);
	
	return 0;
}
