#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	int *p;
	printf("enter the size of memory ");
	scanf("%d",&n);
	p=(int *)malloc(n *sizeof(int));
	if(p==NULL)
	{
		printf("memory not allocated");
		return 1;
	}for(i=0;i<n;i++)
	{
	//	p[i]=i+1;
		printf("enter the values for p[%d]\n",i);
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("p[%d] : %d\n",i,p[i]);
	
		
	}
	free(p);
	return 0;
}