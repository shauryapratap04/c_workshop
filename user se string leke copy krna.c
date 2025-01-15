#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("enter string\n");
	gets(a);
	strncpy(b,a,9);
	printf("copied string is: \n");
	puts(b);
	return 0;
}