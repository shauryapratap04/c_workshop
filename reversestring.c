#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,w,s=0;
	printf("enter character");
	scanf("%d", &n);
	w=n;
	while(n>0)
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	if(w==s)
	printf("palindrome\n");
	
	else
	printf("not pali\n");
	
printf("reverse is %d", s);
}