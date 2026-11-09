#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	int *a;
	
	printf("输入申请几个int内存\n");
	scanf("%d",&n);
	
	//int a[n];		//VLA,C99;
	a = (int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	
	free(a);
	
	return 0;
}
