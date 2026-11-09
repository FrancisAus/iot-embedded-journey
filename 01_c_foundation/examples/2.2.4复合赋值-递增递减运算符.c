#include <stdio.h>

int main()
{
	int a=100;
	printf("a=100\n");
	printf("a++=%d\n",a++);
	
	int b = a++;
	printf("b=a++\n");
	printf("b=%d\n",b);
	printf("++b=%d\n",++b);
	
	return 0;
}
