#include<stdio.h>
void main()
{
	int a=1,n;
	printf("enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
	a=a*n;
	n--;
	}
	printf("factorial of the number is %d",a);
}
