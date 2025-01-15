#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	for(a=1; a<=10; a=a+1)
	{
		if(a%3!=0)
			continue;
		
			printf("%d ",a);
	}
	
	
}