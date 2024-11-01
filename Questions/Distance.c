#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	printf("Enter the value of x1,x2,y1,y2:\n");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	double req=pow((x2-x1),2)+pow((y2-y1),2);
	double result=sqrt(req);
	printf("distance is:%lf\n",result);
	return 0;




}
