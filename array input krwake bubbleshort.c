#include<stdio.h>
void main(){
	int i,temp,n,b,s;
	printf("enter size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
	printf("array key is %d\n",i);
	scanf("%d",&arr[i]);}
	for(b=0;b<n;b++)
	{
	
	for(s=0;s<n-1;s++){
	
	if(arr[s]>arr[s+1])
	{
	temp=arr[s];
	arr[s]=arr[s+1];
	arr[s+1]=temp;}
}}for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,arr[i]);}}