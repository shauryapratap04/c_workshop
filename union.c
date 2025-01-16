#include<stdio.h>
#include<string.h>
union data
{
	int i;
	float f;
	char a[50];
};
int main()
{
	union data d;
	d.i=10;
	printf("integer value: %d\n",d.i);
	d.f=150.8;
	printf("floating value: %f\n",d.f);
	strcpy(d.a,"dheela");
	printf("character: %s\n",d.a);
	return 0;
}