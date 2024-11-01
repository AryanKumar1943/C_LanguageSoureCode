#include<stdio.h>
int main()
{
	int a=9;
	int sum=0;
	int z=a;
	sum=a%10;
	a=a/10;
	sum=sum+a%10;
	a=a/10;
	sum=sum+a%10;
	a=a/10;
	sum=sum+a%10;
	a=a/10;
	sum=sum+a%10;
	a=a/10;
	
	
	
	printf("the sum of the digits of the number%d is %d ",z,sum);
	
	
	
	
}
