#include<stdio.h>
void main()
{
	int n,a;
	printf("enter the number\n");
	scanf("%d",&n);
	a=even_odd(n);
	if(a==1)
	{
		printf("%d is odd",n);
	}
	if(a==0)
	{
		printf("%d is even",n);
	}
}

int even_odd(int x)
{
	if(x%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
