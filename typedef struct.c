#include<stdio.h>
#include<string.h>
typedef struct stu
{
	char name[50];
	char branch[30];
	int roll;
}stu1;
int main()
{
	stu1 s;
	strcpy(s.name,"ABC");
	strcpy(s.branch,"CSE");
	s.roll=20;
	printf("%s\n",s.name);
	printf("%s\n",s.branch);
	printf("%d\n",s.roll);
	return 0;
}