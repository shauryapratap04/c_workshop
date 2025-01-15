#include<stdio.h>
#include<conio.h>
void main()
{
	int a=7;
	int *ptr=&a;
	printf("Value of A=%d\n",a);
	printf("adress of A=%p\n",&a);
	printf("pointer ptr points to address %p\n",ptr);
	printf("Value at adress stored in PTR=%d\n",*ptr);
	getch();
}