#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int i;
	for(i=4;i>=0;i--)
	{
		printf("a[%d]=%d\n",4-i,a[i]);
}}