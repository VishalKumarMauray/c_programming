#include<stdio.h>
void main()
{
	int sum,avg,a,b,c;
	printf("enter the numbers ");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	avg=(a+b+c)/3;
	printf("Sum of numbers %d\nAverage of numbers %d\n",sum,avg);
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
	if(a<b && a<c)
	{
		printf("a is smaller");
	}
	else if(b<a && b<c)
	{
		printf("b is smaller");
	}
	else
	{
		printf("c is smaller");
	}
}
