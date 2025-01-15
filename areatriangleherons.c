#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,p,area;
	printf("Enter the side's length: ");
	scanf("%f %f %f", &a,&b,&c);
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("The area of triangle using Heron's formula is: %f", area);
	}
	else
	{
		printf("7vi fail maths pdh ke aa");
	}return 0;
}