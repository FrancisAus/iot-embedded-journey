#include <stdio.h>

int main(void){
	
	char a[] = {0,1,2,3,4,5,6,7,8,9,-1,};
	char *pa = &a[0];
	
//	for(int i=0;i < sizeof(a)/sizeof(a[0]);i++){
//		printf("%d\n",a[i]);
//	}
	
	while(*pa != -1){
		printf("%d\n",*pa++);
	}
	
	return 0;
}
