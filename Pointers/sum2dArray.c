#include<stdio.h>
int main(){
	int a[] = {10,20,30,40};
	int b[] = {5,6,7,8};
	int c[] = {6,7,8,9};
	int row,col;
	int *p[3]; //pointer array of size 3
	p[0] = a;
	p[1] = b;
	p[2] = c;
	int s[4];
	printf("My Array is: \n");
	for(row = 0;row<3;row++){
		for(col=0;col<4;col++){
			//printf("%3d ", *(p[row]+col));
			printf("%3d",*(*p+row)+col);
		}
		printf("\n");
	}
	for(col = 0;col<4;col++){
		int sum = 0;
		for(row=0;row<3;row++){
			sum += *(p[row]+col);
		}
		s[col] = sum;
	}
	printf("=================\n");
	for(col=0;col<4;col++){
		printf("%3d",s[col]);
	}
	
	return 0;
}
