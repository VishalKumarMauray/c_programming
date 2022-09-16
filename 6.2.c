#include<stdio.h>
void main()
{
	int n,m=1;
	printf("enter the number ");
	scanf("%d",&n);
	while(n>=1)
	{
		m=m*n;
		n--;
	}
	printf("the factorial of the number is %d",m);
}
