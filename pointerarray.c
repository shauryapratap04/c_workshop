#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int *ptr=a;
	printf("Value at PTR:%d\n",*ptr);
	ptr++;
	printf("Value at PTR++:%d\n",*ptr);
	ptr=ptr+2;
	printf("Value at PTR:%d\n",*ptr);
	
}