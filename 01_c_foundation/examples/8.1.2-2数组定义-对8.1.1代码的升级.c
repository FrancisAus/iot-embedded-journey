#include <stdio.h>

int main()
{
	double sum = 0;
	int cnt = 0;
	int a;
	int num[cnt];  //定义数组，[]中填变量是C99行为！
	
	scanf("%d",&a);
	while(a != -1){
		num[cnt] = a;  //对数组元素赋值
//		{
//			printf("\n%d\t",cnt);
//			for(int m=0;m<=cnt;m++){
//				printf("%d\t",num[m]);
//			}
//			
//		}
		sum += a;
		cnt ++;
		scanf("%d",&a);
	} 
	
	if(cnt >0){
		sum /= cnt;
		printf("%f\n",sum);
		for(int i=0;i<cnt;i++){
			if(num[i] > sum){
				printf("%d\t",num[i]);  //调用数组元素
			}
		}  //遍历数组
	} 
	return 0;	
}
