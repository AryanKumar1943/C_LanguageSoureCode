#include<stdio.h>
void ReversePrint(int n);
int main()
{	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	ReversePrint(n);
	
	return 0;
}
void ReversePrint(int n)
{	char num;
	if(n==1)
	{
	scanf(" %c",&num);	
	printf("%c ",num);
	
	}
	else{
	
	scanf(" %c",&num);
	ReversePrint(n-1);
	printf("%c ",num);
}
}

