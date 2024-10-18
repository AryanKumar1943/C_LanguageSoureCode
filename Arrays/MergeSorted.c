#include <stdio.h>

int main() {
    int size1, size2, i, j, x = 0,y=0,z=0;
    
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
    while(x<size1&&y<size2)
    {  
         if(arr1[x]<arr2[y])
         {
         arr3[z]=arr1[x];
         x++;
         z++;
         
         }
         else
         {
         arr3[z]=arr2[y];
         y++;
         z++;
         }
    }
    while(x<size1)
    {
    
    arr3[z]=arr1[x];
    z=z+1;
    x++;
    }
    while(y<size2)
    {
    arr3[z]=arr2[y];
    z=z+1;
    y++;
    }
    printf("merged array is:\n");
    for(i=0;i<size1+size2;i++)
    {
    printf("%d ",arr3[i]);
    }
     
  	return 0;   
 }

