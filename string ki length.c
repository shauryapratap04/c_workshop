#include<stdio.h>
#include<string.h>
void funcat(char str1[],char str2[])
{
	int i,j;
	while(str1[i]!='\0')
	{
		i++;
	}while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}str1[i]='\0';
}
int main()
{
	char str1[200],str2[200];
	printf("enter first string ");
	scanf("%s",&str1);
	printf("enter secomf string ");
	scanf("%s",&str2);
	funcat(str1,str2);
	printf("value is %s\n",str1);
	return 0;
}