#include<stdio.h>
#include<conio.h>
void main()
{
	int a=7;
	int *p1=&a;
	int *p2=&a;
	printf("value of x using p1 is %d\n", *p1);
	printf("value of x using p2 is %d\n", *p2);
	*p1=200;
	printf("value of x after using p2 is %d\n",*p2);
	getch();
}