#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("请输入三个数，以比较大小\n");
	scanf("%d %d %d",&a,&b,&c);
	
	int max = 0;
	
	if(a>b){
		if(a>c){
			max = a;
		} else 	max = c;
	} else {
		if(c>b){
			max = c;
		} else max = b;
	}
	
    printf("%d最大",max);
	
	return 0;
}
