#include<stdio.h>
int sum(int ,int );
int sub(int ,int );
int main()
{
	int a,b,p,q,A,B;
	printf("Enter 2 numbers to add: ");
	scanf("%d %d", &a,&b);
	printf("Enter 2 numbers to subtract: ");
	scanf("%d %d", &p,&q);
	printf("add: %d\t sub: %d\n",sum(a,b),sub(p,q));
}
int sum(int w,int x)
{return w+x;}

int sub(int y,int z)
{return y-z;
}