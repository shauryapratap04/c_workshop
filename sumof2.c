#include<stdio.h>
#include<conio.h>
/*void sum(int, int);
void main()
{
	int x, y, z;
	
	printf("enter first number ");
	scanf("%d", &x);
	printf("enter second number ");
	scanf("%d", &y);
	sum(x,y);
	
	
}
void sum(int a, int b)
{
	int k;
	k=a+b;
	printf("%d", k);
}*/
int sum(int, int);
int main()
{
	int x, y, z;
	
	printf("enter first number ");
	scanf("%d", &x);
	printf("enter second number ");
	scanf("%d", &y);
	z=sum(x,y);
	printf("the sum is %d",z);
	return 0;
	
}
int sum(int a, int b)
{
	int k;
	k=a+b;
	return k;
}