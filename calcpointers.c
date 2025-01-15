#include<stdio.h>
#include<conio.h>
#include<math.h>
void cal1(float,float);
void cal2(float,float);
void cal3(float,float);
void cal4(float,float);
void main()
{
	int o,x,y;
	printf("whether 1(+) or 2(/): ");
	scanf("%d", &o);
	printf("enter two numbers: ");
	scanf("%d %d",&x,&y);
	if(o==1)
	{
		cal1(x,y);
	}
	else if (o==2)
	{
		cal2(x,y);
	}
	
}
void cal1( float a,float b)
{
	float sum;
	float *pa=&a, *pb=&b, *psum=&sum;
	sum=a+b;
	printf("sum is %f\n", sum);
	printf("address of sum is %p\n",&sum);
	printf("adress of %f and %f is %p and %p\n",a,b,&a,&b);
}
void cal2( float a,float b)
{
	float div;
	float *pa=&a, *pb=&b, *pdiv=&div;
	div=a/b;
	printf("div is %f\n", div);
	printf("address of div is %p\n",&div);
	printf("adress of %f and %f is %p and %p\n",a,b,&a,&b);
}
void cal3( float a,float b)
{
	float sub;
	float *pa=&a, *pb=&b, *psub=&sub;
	sub=a-b;
	printf("sub is %f\n", sub);
	printf("address of sub is %p\n",&sub);
	printf("adress of %f and %f is %p and %p\n",a,b,&a,&b);
}
void cal4( float a,float b)
{
	float mul;
	float *pa=&a, *pb=&b, *pmul=&mul;
	mul=a*b;
	printf("mul is %f\n", mul);
	printf("address of mul is %p\n",&mul);
	printf("adress of %f and %f is %p and %p\n",a,b,&a,&b);
}