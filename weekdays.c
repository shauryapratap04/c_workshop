#include<stdio.h>
#include<conio.h>
void main()
{
	int week;
	printf("konsa din?\t");
	scanf("%d", &week);
	switch(week)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Mangalday");
			break;
		case 3:
			printf("Buddhday");
			break;	
		case 4:
			printf("Brihaspatday");
			break;
		case 5:
			printf("Shukrday");
			break;
		case 6:
			printf("Shaniday");
			break;
		case 7:
			printf("Raviday");
			break;
			default:
				printf("Inavalid input");
	}
	
}