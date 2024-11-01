#include<stdio.h>
#include<math.h>
int addthree(int a,int b,int c);
int main()
{
	int a=10,b=20,c=30;
	int p=addthree(a,b,c);
	printf("sum=%d\n",p);
        return 0;
}
int addthree(int a,int b,int c)
{
	int s;
	s=a+b+c;
	return s;
}
