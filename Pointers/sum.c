#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[],char *argp[])
{
	//char *str[]={"ITER","CSE","SOA",NULL};
	//printf("total no. of arguments%d\n",argc);
	for(int i=0;argv[i]!=NULL;i++)
	{
	printf("str[%d] ---->%s\n",i,argv[i]);
	
	}
	int s=(atoi(argv[1])+atoi(argv[2]));
	printf("sum=====%d\n",s);
	return 0;
		
}
