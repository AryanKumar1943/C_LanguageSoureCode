#include<stdio.h>
int Fact(int n);
int main()
{	int s,p;	
	printf("enter the number");
	scanf("%d",&s);
 	p=Fact(s);
 	printf("Factorial=%d\n",p);
 	return 0;	
}
int Fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*Fact(n-1);
}
