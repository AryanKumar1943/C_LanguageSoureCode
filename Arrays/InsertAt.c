#include<stdio.h>
int main()
{
	
	int ele,pos,i,size;
	printf("enter the number of elements in array");
	scanf("%d",&size);
	int arr[size+1];
	printf("enter the elements of array");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("Enter the number to be Insertd\n");
	scanf("%d",&ele);
	printf("enter the position\n");
	scanf("%d",&pos);
	for(i=size;i>pos-1;i--)
	{
	arr[i]=arr[i-1];
	}
	arr[pos-1]=ele;
	for(i=0;i<size+1;i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
