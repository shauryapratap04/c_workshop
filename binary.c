#include<stdio.h>
int binary(int arr[],int size,int target)
{
	int low=0,high=size-1,mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(arr[mid]==target)
		{
			return mid;
		}
		else if(arr[mid]<target)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=10;
	int target;
	printf("enter number- ");
	scanf("%d",&target);
	int result=binary(arr,size,target);
	if(result!=-1)
		printf("element is found %d",result);
	else
		printf("element not found");
	return 0;
}