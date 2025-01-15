#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[3][7]={"rekha","zeenat","jaya"};
	for(i=0;i<3;i++)
	{
		puts(name[i]);
		//printf("%d %s\n",i+1,name[i]);
		
	}return 0;
}