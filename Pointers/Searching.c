#include <stdio.h>
#define size 10

int ifExists(int [] ,int ,int );

int main() {
    int a[size];
    int n, i,k;

    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    printf("Enter the array values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

     printf("Enter the number to be serched:\n");
    scanf("%d", &k);
    int res=(ifExists(a,n,k));
   printf("My result is:%d",res);

    return 0;
}

int ifExists(int x[] ,int n,int k) 
{
	for(int i=0;i<n;i++)
	{
	if(x[i]==k)
	{
	return 1;
	}
	}
	return 0;
   
}

