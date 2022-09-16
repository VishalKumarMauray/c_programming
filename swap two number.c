#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter two number ");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swap using call by value\nvalue of a is %d\nvalue of b is %d",a,b);
}
