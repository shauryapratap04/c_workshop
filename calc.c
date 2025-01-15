#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	printf("enter first value %d\t \n");
	scanf("%d", &a);
	printf("enter second value \t \n");
	scanf("%d", &b);
	printf("enter the operation 1=add, 2=substract, 3=multiply, 4=divide \t \n");
	scanf("%d", &c);
	switch(c)
	{
		case 1:
			c=a+b;
			printf("%d is the answer", c);
			break;
		case 2:
			c=a-b;
			printf("%d is the answer", c);
			break;
		case 3:
			c=a*b;
			printf("%d is the answer", c);
			break;
		case 4:
			c=a/b;
			printf("%d is the answer", c);
			break;
			default:
				printf("Invalid");
	}
}