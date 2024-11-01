#include<stdio.h>
void tower(int,char,char,char);
int main()
{
	int n;
	printf("Welcome to TOWER OF HANOI \n");
	printf("no of disks");
	scanf("%d",&n);
	tower(n,'A','C','B');
	printf("\nBYE BYE TOWER SOLVED\n");
	return 0;
	}
	void tower(int n,char from_peg, char to_peg , char aux_peg)
	{
	if(n==1)
	{
	printf("move disk %d from %c to %c \n",n,from_peg,to_peg);
	}
	else
	{
	tower(n-1,from_peg,to_peg ,aux_peg);
	printf("move disk %d from %c to %c \n",n,from_peg,to_peg);
	tower(n-1,aux_peg,to_peg ,from_peg);
	
	
	}




}
