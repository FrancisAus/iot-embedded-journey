 #include <stdio.h>
 
 int main()
 {
 	int input;
 	int times=0;
 	
 	printf("请输入数字以确认几位整数\n");
	scanf("%d",&input);
 	
 	times++;
 	input/=10;
 	//以上两行解决了纯while循环中0也是一位数的问题
 	
 	while(input>0){
	 	times++;
	 	input/=10;
	}
	 
	 printf("%d",times);
	 return 0;
 }
