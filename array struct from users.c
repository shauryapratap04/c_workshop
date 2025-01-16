#include<stdio.h>
struct book
{
	int id;
	char title[40];
	float price;
};
void main()
{
	int i=0;
	struct book b1[3]={{
	for(i=0;i<3;i++)
	{
	scanf("%d, %s,%f",b1[1].id,b1[1].title,b1[1].price)},{scanf("%d, %s,%f",b1[2].id,b1[2].title,b1[2].price)},{scanf("%d, %s,%f",b1[3].id,b1[3].title,b1[3].price)}
	}};
	for(i=0;i<3;i++)
	{
		printf("ID: %d\n",b1[i].id);
		printf("Name: %s\n",b1[i].title);
		printf("Price: %f\n",b1[i].price);
	}
}