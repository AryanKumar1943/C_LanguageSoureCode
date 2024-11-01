#include<stdio.h>
void ReversePrint(int n);
int main()
{	int n,p;
	printf("enter the value of n");
	scanf("%d",&n);
	ReversePrint(n);
	
	return 0;
}
void ReversePrint(int n)
{	int num;
	if(n==1)
	{
	scanf("%d",&num);	
	printf("%d",num);
	
	}
	else{
	
	scanf("%d",&num);
	ReversePrint(n-1);
	printf("%d",num);
}
}

