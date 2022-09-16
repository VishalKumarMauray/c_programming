#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter two number ");
	scanf("%d%d",&a,&b);
	c=a^b;
	b=c^b;
	a=c^a;
	printf("After swap\nvalue of a is %d\nvalue of b is %d",a,b);
}
