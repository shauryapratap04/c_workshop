#include<stdio.h>
int linear(int arr[],int s,int k)
{
	int i;
	for(i=0;i<s;i++)
	{
		if(arr[i]==k)
		return i;
		
	}return -1;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int k=5;
	int result=linear(arr,5,k);
	if(result!=-1)
	printf("element %d found at index %d",k,result);
	else
	printf("key not found");
	return 0;
	
	
}