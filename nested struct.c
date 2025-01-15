#include<stdio.h>
struct add{
	char city[35];
	int pin;
};
struct name{
	int roll;
	char name[30];
	struct add s1;
};
int main()
{
	struct name a1={54,"Moon Knight",{"Greater Nodia",201310}};
	printf("Roll no.: %d\n",a1.roll);
	printf("Name: %s\n",a1.name);
	printf("City: %s\n",a1.s1.city);
	printf("Pin: %d\n",a1.s1.pin);
}