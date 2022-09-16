#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,*p1,*p2;
	printf("enter two number ");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	c=*p1;
	*p1=*p2;
	*p2=c;
	printf("After swap\nvalue of a %d\nvalue of b %d",*p1,*p2);
}
