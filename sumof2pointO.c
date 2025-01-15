#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
	int q;
	q=sum();
	printf("%d",q);
	getch();
}
int sum()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
}