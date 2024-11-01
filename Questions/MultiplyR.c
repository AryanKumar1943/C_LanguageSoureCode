#include <stdio.h>
int multiplyRecursion(int m,int n);
int main()
{	int m,n,p;
	printf("enter multiplicant:");
	scanf("%d",&m);
	printf("enter multiplier:");
	scanf("%d",&n);
	p=multiplyRecursion(m,n);
	printf("My answer is%d\n",p);
	return 0;
}
int multiplyRecursion(int m,int n)
{
	int ans;
	if(n==1)
	{
	return m;
	}
	ans=m+multiplyRecursion(m,n-1);
	return ans;

}
