#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("enter two strings:\n");
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
	return 0;
}