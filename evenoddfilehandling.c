#include<stdio.h>
int main()
{
	FILE *input,*even,*odd;
	int no[20],i;
	input=fopen("number.txt","w");
	if(input==NULL)
	{
		printf("file not found");
	return 1;}
	printf("enter any 20 numbers");
	for(i=0;i<20;i++)
	{
		scanf("%d",&no[i]);
		fprintf(input,"%d\n",no[i]);
	}
	fclose(input);
	input=fopen("number.txt","w");
	even=fopen("even.txt","w");
	odd=fopen("odd.txt","w");
	if(even==NULL || odd==NULL)
	{
		printf("even or odd file not found.");
		return 1;
	}for(i=0;i<20;i++)
	{
		if(no[i]%2==0)
		{
			fprintf(even,"%d\n",no[i]);
		}else
		{
			fprintf(odd,"%d\n",no[i]);
		}
	}fclose(input);
	fclose(even);
	fclose(odd);
	return 0;
}