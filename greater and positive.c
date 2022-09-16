#include<stdio.h>
void main()
{
	int sum,a,b,c;
	printf("enter the numbers ");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(a>b && a>c)
	{
		printf("a is greater\n");
	}
	else if(b>a && b>c)
	{
		printf("b is greater\n");
	}
	else
	{
		printf("c is greater\n");
	}
	if(sum>=0)
	{
		printf("Sum is positive");
	}
	else
	{
		printf("Sum is negative");
	}
}
