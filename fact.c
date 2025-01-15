#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
/*	int a,b=1;
	printf("enter number ");
	scanf("%d", &a);
	do{
	
	b=b*a;
	a--;}
	while(a!=1);
	printf("%d", b);
	for(a=1; a=a; a++)
	b=b*a;

	printf("%d", b);*/
	int n,i,fact=1;
	printf("Enter the number to find factorial: ");
	scanf("%d", &n);
	if(n>0)
	{
		for (i=1;i<=n;i++)
		{
			fact=fact*i;
		}
	
	printf("Factorial is %d",fact);
}
	else
	{
		printf("+ve chahiye prabhu");
	}
}