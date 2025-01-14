# c_workshop
#include<stdio.h>
void main()
{
	int b,j,s;
	printf("enter size of values for array:");
	scanf("%d",&b);
	int brr[b];
	printf("Enter array element\n");
	for(j=0;j<b;j++)
	{
		printf("array key is %d\n",j);
		scanf("%d",&brr[j]);
	}
	printf("enter the value to add: ");
	scanf("%d",&s);
	for(j=0;j<b;j++)
	{
		brr[j]+=s;
	}
	for(j=0;j<b;j++)
	{
		printf("new key element is %d\n",brr[j]);
	}
}
