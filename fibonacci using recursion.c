#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,m=0,i;
	printf("Enter total terms: ");
	scanf("%ld",&n);
	printf("Fibonacci series terms are:");
	for(i=1;i<=n;i++)
	{
		printf("%ld ",fib(m));
		m++;
	}
}

int fib(int a)
{
	if(a==0 || a==1)
	{
		return a;
	}
	else
	{
		return(fib(a-1)+fib(a-2));
	}
}
