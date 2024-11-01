#include<stdio.h>
int main()
{
	int x;
	printf("enter the value of x::");
	scanf("%d",&x);
	printf("dec x=%d octal x=%o hex x=%x\n",x,x,x);
	printf("dec x=%d octal x=%#o hex x=%#x\n" ,x,x,x);
	return 0;
}
