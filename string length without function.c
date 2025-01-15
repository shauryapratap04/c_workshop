#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter the string: ");
	char s[70];
	gets(s);
	int i;
	for(i=0;i<70;i++)
	{
		printf("%d ",s[i]);
	}return 1;
}//wrong haha