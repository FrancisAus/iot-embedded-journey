#include <stdio.h>
#include <string.h>

int mycmp(const char *s1,const char *s2)
{
//	int idx = 0;
//	while(s1[idx] == s2[idx] && s1[idx] != '\0'){
//		idx++;
//	}
//	return *s1 - s2[idx];
	
	while(*s1 == *s2 && *s1 != '\0'){
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main(int argc,char const *argv[])
{
	char s1[] = "abc";
//	char s2[] = "abc";
//	char s3[] = "bbc";
//	char s4[] = "aac";
	char s2[] = "Abc";
	
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",mycmp(s1,s2));
//	printf("%d\n",strcmp(s1,s3));
//	printf("%d\n",strcmp(s1,s4));


	return 0;
}
