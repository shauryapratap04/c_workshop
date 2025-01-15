#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=1; i<=6; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ", i);
		}printf("\n");
	}
	for(i=6; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}printf("\n");
	}
	for(i=1; i<=5; i++)
	{
		for(j=5; j>i; j--)
		
		printf(" ");
		for(k=1; k<=2*i-1; k++)
		printf("-");
		printf("\n");
	}
}