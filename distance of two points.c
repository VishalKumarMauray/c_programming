#include<stdio.h>
#include<math.h>
void main()
{
	float x1,x2,y1,y2,d,x,y;
	printf("enter the value of (x1,y1) ");
	scanf("%f%f",&x1,&y1);
	printf("enter the value of (x2,y2) ");
	scanf("%f%f",&x2,&y2);
	x=(x2-x1)*(x2-x1);
	y=(y2-y1)*(y2-y1);
	d=sqrt(x+y);
	printf("distance between two points is %f",d);
}
