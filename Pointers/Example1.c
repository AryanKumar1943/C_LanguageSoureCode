#include <stdio.h>
#define size 10

void update(int *x, int *y);

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

    update(&a[2], &a[3]);

    printf("My array after update is:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

void update(int *x, int *y) {
    int t;
    t = *x;  // Store the value of x
    *x = *y; // Assign the value of y to x
    *y = t;  // Assign the stored value t to y
}

