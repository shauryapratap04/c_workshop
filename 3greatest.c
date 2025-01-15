#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter three values\t");
	scanf("%f %f %f", &a, &b, &c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%f is the greatest", a);
		}
		else 
		{
			printf("%f is greatest", c);
		}
	}
	else if(b>c)
		{
			printf("%f is the greatest", b);
			
		}
	else
		{
			printf("%f is the greatest", c);
		}
	
/*	if(a>b && a>c)
	{
		printf("%f is the greatest", a);
		
	}
	else if(b>c)
	{
		printf("%f is greatest", b);
	}
	else {
		printf("%f is the greatest", c);

	}*/
}