#include<stdio.h>
int main(int argc,char *argv[],char *argp[])
{
	//char *str[]={"ITER","CSE","SOA",NULL};
	//printf("total no. of arguments%d\n",argc);
	for(int i=0;argp[i]!=NULL;i++)
	{
	printf("str[%d] ---->%s\n",i,argp[i]);
	
	}


		
}
