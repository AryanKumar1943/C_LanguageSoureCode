#include <stdio.h>
#define size 10

void update(int x[], int n);

int main() {
    int a[size];
    int n, i;

    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    printf("Enter the array values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("My array is:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    update(a,n); //a=&a[0]

    printf("My array after update is:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

void update(int *x, int n) 
{
	int i;
    for (i = 0; i < n; i++) {
       *(&x[i])=100; // x[i]=100 , i[x]=100 , *(x+i)=100 ,*(&i[x])
    }

}

