#include<stdio.h>
void main()
{
	int l,b,a,p;
	printf("enter the length and bredth of the rectangle ");
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("Area is %d\nParameter is %d",a,p);
}
