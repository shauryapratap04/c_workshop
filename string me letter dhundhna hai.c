#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="find character 'n'";
	char *pos=strchr(a,'n');
	if(pos)
	{
		printf("value 'n' found at %ld\n",pos-a);
	}else
	{
		printf("character dheela");
	}return 0;
}