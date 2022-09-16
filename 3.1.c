#include<stdio.h>
void main()
{
	int x,y,z,a;
	printf("enter the value of x,y and z ");
	scanf("%d%d%d",&x,&y,&z);
	printf("before change\nx=%d\ny=%d\nz=%d\n\n",x,y,z);
	a=x;
	x=y;
	y=z;
	z=a;
	printf("after change\nx=%d\ny=%d\nz=%d\n\n",x,y,z);
}
