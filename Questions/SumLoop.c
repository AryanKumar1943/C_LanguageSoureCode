#include<stdio.h>
int main()
{
        int sum=0;
        int x=0;
        int i=0;
        printf("Enter 10  numbers one bye one to be added ::\n");
	while (i<10) 
	{
	scanf("%d",&x);
	sum=sum+x;
        i++;
        }
        printf("required sum is::%d\n",sum);
        return 0;





}
