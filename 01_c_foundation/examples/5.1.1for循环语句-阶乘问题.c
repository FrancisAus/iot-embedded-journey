#include <stdio.h>

int main()
/*从1阶乘到n
{
	int n;
	int factor=1;
    
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		factor *= i;
	}
	printf("%d",factor);
    return 0;
}*/
//从n阶乘到1
{
	int n;
	int factor=1;
    
	scanf("%d",&n);
	
	for(;n>0;n--){
		factor *= n;
	}
	printf("%d",factor);
    return 0;
}
