#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int roll;
	char name[50];
	float marks;
};
int main()
{
	struct stu *s1=(struct stu *)malloc(sizeof (struct stu));
	s1->roll=21;
	snprintf(s1->name,sizeof(s1->name),"ABC");
	s1->marks=250.8004;
	printf("Roll no. %d\n",s1->roll);
	printf("Name. %s\n",s1->name);
	printf("Marks. %f\n",s1->marks);
	free(s1);
	return 0;
}