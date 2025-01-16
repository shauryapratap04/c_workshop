#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *p;
	p=(int *)malloc(5 *sizeof(int));
	if(p==NULL)
	{
		printf("memory not allocated");
		return 1;
	}for(i=0;i<3;i++)
	{
		p[i]=i+1;
	}
	int s,f;
	printf("How much size u want to increase? ");
	scanf("%d",&f);
	p=(int *)realloc(p,f*sizeof(int));
	for(i=0;i<f;i++)
	{
		p[i]=i+1;
	}
	
	for(i=0;i<f;i++)
	{
		printf("p[%d] : %d\n",i,p[i]);
	}
	free(p);
	return 0;
}