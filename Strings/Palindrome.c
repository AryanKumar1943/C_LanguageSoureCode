#include<stdio.h>
//int slength(char *s);
#include"help.h"
#include<string.h>
int palindromeCheck(char *s,char *rev);
int main()
{
	char str[50],rev[50];
	int i,j;
	printf("enter the string::");
	//fgets(str,20,stdin);
	//gets(str);
	scanf("%[^\n]",str);
	//for(i=0;i<5;i++)
	//{
	//str[i]=getchar();
	//}
	str[i]='\0';
	printf("your string is::");
	//puts(str);
	for(i=0;i<5;i++)
	{
	putchar(str[i]);
	}
	//int len=slength(str);  //Libarary file
	int len=strlen(str); 
	printf("String length=%d\n",len);
	j=0;
	for(int n=len-1;n>=0;n--)
	{
	rev[j]=str[n];
	j=j+1;
	}
	rev[j]='\0';
	printf("Rev=%s\n",rev);
	palindromecheck(str,rev);
	
	
	return 0;
	}
 
