#include<stdio.h>
int prime();
void main()
{
	int a,n;
	printf("enter the positive number except 0 and 1 \n");
	scanf("%d",&n);
	a=prime(n);
	if(a==1)
	{
		printf("entered number is not prime");
	}
	else
	{
		printf("entered number is prime");
	}
}
int prime(int n)
{
	int i,flag=0;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
