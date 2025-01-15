#include<stdio.h>
#include<string.h>
int main()
{
	char a[2178];
	printf("nter sting\n");
	gets(a);
	strrev(a);
	puts(a);
	strupr(a);
	puts(a);
	strlwr(a);
	puts(a);
	return 0;
}