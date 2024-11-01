#include<stdio.h>
int main()
{
	int arr[5];
	int max,min,i,sumodd=0,sumeven=0;
	printf("Enter the elements of array:");
	
	for(i=0;i<5;i++)
	{
	  scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<5;i++)
	{
	 if(arr[i]>max)
	{
	   max=arr[i];
	}
	if(arr[i]<min)
	{
	   min=arr[i];
	}
	if(arr[i]%2!=0)
	{
	   sumodd=sumodd+arr[i];
	}
	if(arr[i]%2==0)
	{
	   sumeven=sumeven+arr[i];
	}
	}
	printf("Maximum element is=%d\n",max);
	printf("Minimum element is=%d\n",min);
	printf("Odd sum is=%d\n",sumodd);
	printf("even sum is=%d\n",sumeven);
	
	return 0;
}
