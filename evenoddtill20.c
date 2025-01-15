#include<stdio.h>
#include<conio.h>
void a(int);
void b(int);
void main()
{
	int n;
	printf("enter the no.: ");
	scanf("%d", &n);
	a(n);
	return 0;

}
void a(int x)
{
	if(x>0){
	
	printf("A: %d\n", x);
	b(x-1);
}}
void b(int x)
{
	if(x>0){
	
	printf("B: %d\n", x);
	a(x-1);
}}