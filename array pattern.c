#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	printf("2D array\n");
	int s,i;
	for(i=0;i<2;i++)
	{
		for(s=0;s<3;s++)
		{
			printf("%d\t",a[i][s]);
		}printf("\n");
	}
	

	int b[2][3]={{7,8,9},{3,6,9}};
	int c[2][3];
	printf("2D arrays ka sum\n");
	for(i=0;i<2;i++)
	{
		for(s=0;s<3;s++)
		{
			c[i][s]=a[i][s]+b[i][s];
			printf("sum of %d & %d=%d\t",a[i][s],b[i][s],c[i][s]);
		}printf("\n");
	}return 0;
}