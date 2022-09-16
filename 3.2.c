#include<stdio.h>
void main()
{
	float n;
	int a,c,b;
	printf("enter number ");
	scanf("%f",&n);
	a=n;
	b=a%10;
	c=a%100;
	printf("number you entered %f.\nOne right most part of the integer part is %d.\nTwo right most part of integer part is %d",n,b,c);
}
