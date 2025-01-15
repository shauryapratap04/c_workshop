#include<stdio.h>
void main()
{
	float a;
	printf("Enter a number\t");
	scanf("%f", &a);
	if(a>0)
	{
		printf("%f is positive", a);
		
	}
	else if(a<0)
	{
		printf("%f is negative", a);
		
	}
	else
	{
		printf("It is neutral");
		
	}
}