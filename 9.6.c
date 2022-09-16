#include<stdio.h>
void main()
{
	float n;
	printf("enter the number with atleast 3 decimal point ");
	scanf("%f",&n);
	printf("%.1f %.2f %.3f",n,n,n);
}
