#include <stdio.h>

void minimax(int a[],int length,int *min,int *max);

int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9,};
	int min,max;
	
	minimax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	
	printf("min=%d,max=%d",min,max);
	
	return 0;	
}

void minimax(int a[],int length,int *min,int *max)
{
	 *min = *max = a[0];
	
	for(int i=0;i<length;i++){
		if(a[i] < *min){
			*min = a[i];
		} 
		
		if(a[i] > *max){
			*max = a[i];
		}	
	}
}
