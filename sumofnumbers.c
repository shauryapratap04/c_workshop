#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b=0;
	do
	{
		printf("Enter a number (0 to stop) ");
		scanf("%f", &a);
		b=b+a;
		
	}
	while(a!=0);
	printf("Total sum = %f", b); 
}