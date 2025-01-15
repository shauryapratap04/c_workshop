#include<stdio.h>
#include<string.h>
int main()
{	int res;
	char str1[20],str2[20];
	printf("enter first stringg\t");
	scanf("%s",&str1);
	printf("enter second stringg\t");
	scanf("%s",&str2);

	res=strcmp(str1,str2);
	if(res==0)
	{
		printf("string is equal");
	}else if(res<0)
	{
		printf("first string is less");
	}else
	{
		printf("first string is greater");
	}
	return 0;
}