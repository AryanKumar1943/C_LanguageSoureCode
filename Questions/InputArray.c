#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE];
	int n,i;
	int *p;
	//p=&a[0];
	p=a;
	printf("enter how many elements you want :");
	scanf("%d",&n);
	printf("enter the array value\n");
	for(i=0;i<n;i=i+1)
	{
		 scanf("%d",&a[i]);
		//scanf("%d",a+i);
		//scanf("%d",p+i);
	}
	
	printf("my array is\n");
	for(i=0;i<n;i=i+1)
	{
	printf("a[%d]=%d &a[%d]=%p\n",i,*(p+i),i,&a[i]);
	}
	printf("Base Address=%p\n",&a);
	printf("BAse Address by pointer=%p\n",p);
	return 0;
	



}
