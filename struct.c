#include<stdio.h>
/*struct abc
{
	int i;
	char a[20];
	float b;
};
int main()
{
	struct abc d={1,"seokjin",20.5};
	printf("no. %d\n",d.i);
	printf("name %s\n",d.a);
	printf("no. %f\n",d.b);
}*/

struct report
{
	char name[30];
	int roll,year,sem;
	char branch[20];
	char s1[10],s2[10],s3[10],s4[10],s5[10];
	int m1,m2,m3,m4,m5;

};
void main()
{
//	int sum;
	struct report r={"Moolchand Ji",201310,2025,1,"CSE","Maths","Phy","DT","ABC","COI",70,89,96,95,94};
	printf("Name: %s\n",r.name);
	printf("Roll no.: %d\tYear: %d\n",r.roll, r.year);
	printf("Branch: %s\tSemester: %dst\n",r.branch,r.sem);
	printf("Subject: %s\tMarks: %d\n",r.s1,r.m1);
	printf("Subject: %s\tMarks: %d\n",r.s2,r.m2);
	printf("Subject: %s\tMarks: %d\n",r.s3,r.m3);
	printf("Subject: %s\tMarks: %d\n",r.s4,r.m4);
	printf("Subject: %s\tMarks: %d\n",r.s5,r.m5);
	int sum=r.m1+r.m2+r.m3+r.m4+r.m5;
	printf("Total marks: %d\n",sum);
}