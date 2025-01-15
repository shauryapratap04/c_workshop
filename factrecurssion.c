#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	printf("%d", fact(n));
}
int fact(int x)
{
	int a;
	if(x==0)
	return 1;
	else
	a=x*fact(x-1);
	return a;
}