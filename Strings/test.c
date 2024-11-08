#include<stdio.h>

int main()
{
	char str[]="ITER";
	char *ptr="iter";
	printf("%s..%s\n",str,ptr);
	ptr=ptr+1;
	printf("%s..%s\n",str,ptr);
	ptr="SOA UNIQU";
	printf("%s..%s\n",str,ptr);
	return 0;
}

	

