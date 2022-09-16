#include<stdio.h>
#include<conio.h>
void main()
{
	int *p1,*p2,a,b,c;
	printf("enter two number ");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	c=*p1;
	*p1=*p2;
	*p2=c;
	printf("After swap using call by reference\nvalue of a is %d\nvalue of b is %d",a,b);
}
