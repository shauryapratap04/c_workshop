#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character\t");
	scanf("%c", &ch);
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("%c", ch);
	}
	else if(ch>='a' && ch<='z')
	{
		ch=ch-32;
		printf("%c", ch);
	}
	else
	{
		printf("Invalid character");
	}
}