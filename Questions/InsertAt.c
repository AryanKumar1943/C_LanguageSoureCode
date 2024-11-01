#include<stdio.h>
int main()
{
	int arr[5];
	int pos,yn,ele;
	printf("enter the position to insert the element:");
	scanf("%d",&pos);
	printf("enter the element:");
	scanf("%d",&ele);
	arr[pos]=ele;
	printf("do you want to insert more element press1 for yes press2 for no");
	scanf("%d",&yn);
	while(yn==1)
	{
	printf("enter the position to insert the element:");
	scanf("%d",&pos);
	printf("enter the element:");
	scanf("%d",&ele);
	arr[pos]=ele;
	}
	for(int i=0;i<5;i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
