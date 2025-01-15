#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2]={{9,8},{7,6},{5,4}};
	int s,d,i;
	printf("a matrix\n");
	for(i=0;i<2;i++)
	{
		for(s=0;s<3;s++)
		{
			printf("%d ",a[i][s]);
		}printf("\n");
	}
	printf("\nb matrix\n");
	for(i=0;i<3;i++)
	{
		for(s=0;s<2;s++)
		{
			printf("%d ",b[i][s]);
		}printf("\n");
	}printf("\na matrix transpose\n");
	for(i=0;i<3;i++)
	{
		for(s=0;s<2;s++)
		{
			printf("%d ",a[s][i]);
		}printf("\n");
	}printf("\nb matrix transpose\n");
	for(i=0;i<2;i++)
	{
		for(s=0;s<3;s++)
		{
			printf("%d ",b[s][i]);
		}printf("\n");
	}
}