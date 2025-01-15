#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	printf("2D array\n");
	int s,d,i;
	for(i=0;i<2;i++)
	{
		for(s=0;s<3;s++)
		{
			printf("%d\t",a[i][s]);
		}printf("\n");
	}
	

	int b[3][2]={{1,2},{3,4},{5,6}};
	int c[2][2];
	printf("2D arrays ka multiplication\n");
	for(i=0;i<2;i++)
	{
		for(s=0;s<2;s++)
		{
			for(d=0;d<=2;d++)
			{
				c[i][s]+=a[i][d]*b[d][s];
			}printf("%d\t",c[i][s]);
		}printf("\n");
	}return 0;
}