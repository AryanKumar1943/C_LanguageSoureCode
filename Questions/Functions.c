#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,p;
	a=3.0;
	b=4.0;
	p=pow(a,b);
	printf("pow=%d\n",p);
	printf("pow=%d\n",(int)pow(4,5));
	return 0;
}
