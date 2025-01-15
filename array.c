#include<stdio.h>
void main()
{
	int a[7]={1,2,3,4,5,6,7};
	int *p=a;
	printf("annie r yu wokkey??\n");
	int i;
	for(i=0;i<=6;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
		printf("%d=%d\n",i,*p);
	}
	
/*	int b,brr[b],j;
	printf("enter size of values for array:");
	scanf("%d",&b);
	for(j=0;j<b;j++)
	{
		printf("enter the values for index %d\n",j);
		scanf("%d",&brr[j]);
	}
	for(j=0;j<b;j++);
	{
		printf("array keys are %d\n",brr[j]);
	}*/
}