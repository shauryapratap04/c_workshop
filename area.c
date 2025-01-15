#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int s;
	float area;
	printf("figure type? \t");
	printf("1=square/rect, 2=circle, 3=triangle ");
	float l, b, a;
	scanf("%d", &s);
	switch(s)
	{
		case 1:
			
			printf("enter length and breadth\t");
			scanf("%f %f", &l, &b);
			area=l*b;
			printf("area of the rectangle is %f", area);
			break;
		case 2:
			printf("enter radius of circle\t");
			scanf("%f", &l);
			area=(3.141593)*l*l;
			printf("area of the circle is %f", area);
			break;
		case 3:
			printf("enter length and altitude \t");
			scanf("%f %f", &l, &a);
			area=(l*a)/2;
			printf("area of the triangle is %f", area);
			break;
			default:
				printf("invalid");
	}
}