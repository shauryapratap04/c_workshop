#include<stdio.h>
#include<conio.h>
void main(){
	int n,a,s=0;
	printf("enter number");
	scanf("%d", &n);
	while(n>0)
	{
		a=n%10;
		
		s=a+s;
		n=n/10;
	}
	
	/* square ka sum...
	int n,b,a,s=0;
	printf("enter number");
	scanf("%d", &n);
	while(n>0)
	{
		a=n%10;
		b=a*a;
		s=b+s;
		n=n/10;
		*/
printf("sum=%d",s);

}