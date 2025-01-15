#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
void main()
{
	int a=123,b=456;
	printf("old %d %d\n",a,b);
	swap(&a,&b);
	getch();
}
void swap(int *x, int *y)
{
	int q;
	q=*x;
	*x=*y;
	*y=q;
	printf("new %d %d ",*x,*y);
}