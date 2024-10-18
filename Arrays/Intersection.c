#include <stdio.h>

int main() {
    int size1, size2, i, j, k, x = 0;
    
    printf("Enter the size of array1: ");
    scanf("%d", &size1);
    
    printf("Enter the size of array2: ");
    scanf("%d", &size2);
    
    int arr1[size1];
    int arr2[size2];
    int arr3[size1 + size2]; 
   printf("Enter elements of array1:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
   printf("Enter elements of array2:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

   
    for (i = 0; i < size1; i++) {
        int ele = arr1[i];
        for (j = 0; j < size2; j++) {
            if (arr2[j] == ele) {
              
                int flag = 0;
                for (k = 0; k < x; k++) {
                    if (arr3[k] == ele) {
                        flag = 1;
                        break; 
                    }
                }
                if (flag!=1) {
                    arr3[x] = ele;
                    x++;
                }
            }
        }
    }
    printf("Common elements are:\n");
    for (i = 0; i < x; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

