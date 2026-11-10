#include <stdio.h>
#include <string.h>

int mylen(char const *s){
	int idx=0;
	while(s[idx] != '\0'){
		idx++;
	}
	return idx;	
}

int main(int argc,char const *argv[])
{
	char a[] = "Hello";
	
	//printf("strlen=%lu\n",strlen(a));
	printf("mylen=%lu\n",mylen(a));
	printf("sizeof=%lu\n",sizeof(a));
	
	return 0;
}
