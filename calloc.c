#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int *)calloc(10,sizeof(int));
	if(ptr==NULL)
	{
		printf("memory noy");
		return 1;
	}int i;
	for(i=0;i<10;i++)
	{
		printf("p[%d] : %d \n",i,ptr[i]);
	}free(ptr);
	return 0;
}