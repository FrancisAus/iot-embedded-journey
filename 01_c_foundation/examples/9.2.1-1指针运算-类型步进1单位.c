#include <stdio.h>

int main(void){
	
	char a[] = {1,2,3,4,5,6,7,8,9,};
	int b[] = {1,2,3,4,5,6,7,8,9,};
	short c[] = {1,2,3,4,5,6,7,8,9,};
	long long d[] = {1,2,3,4,5,6,7,8,9,};
	
	char *pa = a;
	int *pb = b;
	short *pc = c;
	long long *pd = d;
	
	printf("(char)\npa\t=%p\n",pa);
	printf("pa+1\t=%p\n",pa+1);
	
	printf("(int)\npb\t=%p\n",pb);
	printf("pb+1\t=%p\n",pb+1);
	
	printf("(short)\npc\t=%p\n",pc);
	printf("pc+1\t=%p\n",pc+1);
	
	printf("(long long)\npd\t=%p\n",pd);
	printf("pd+1\t=%p\n",pd+1);
	
	int *pb6 = &b[6];
	printf("(int)\npb\t=%p\n",pb);
	printf("pb6\t=%p\n",pb6);
	printf("pb6-pb\t=%d\n",pb6-pb);
	
	return 0;
}
