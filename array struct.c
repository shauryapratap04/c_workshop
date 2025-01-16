#include<stdio.h>
struct book
{
	int id;
	char title[40];
	float price;
};
int main()
{
	int i;
	struct book b1[3]={
		{1,"C Programming",268.50},{2,"TOEFL",580.6},{3,"BDSM",69.96}
	};
	for(i=0;i<3;i++)
	{
		printf("ID: %d\n",b1[i].id);
		printf("Name: %s\n",b1[i].title);
		printf("Price: %f\n",b1[i].price);
	}return 0;
}