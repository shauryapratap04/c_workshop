#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	int *p=&sum;
	printf("enter two values to add: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("Address of sum is: %p\n",&sum);
	printf("Sum is: %d",sum);
}