#include<stdio.h>
#include<conio.h>
void main()
{
/*	int a=1;
	abc:
		printf("%d ", a);
	if(a<=100)
	{
		a++;
		goto abc;
	}*/
	int a=0;
	abc:
		printf("%d ", a);
	if(a<100 & a%2==0)
	{
		a=a+2;
		goto abc;
	}
}