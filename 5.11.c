#include<stdio.h>
void main()
{
	int h,b,p;
	printf("enter the largest side of the triangle first then the remaining two sides ");
	scanf("%d%d%d",&h,&p,&b);
	if((h*h)==(b*b)+(p*p))
	{
		printf("the entered sides forms the right angled triangle.");
	}
	else
	{
		printf("the entered sides does not form the right angled triangle.");
	}
}
