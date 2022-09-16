#include<stdio.h>
void main()
{
	int m,a,rev,n,sum=0;
	printf("Enter the number ");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		a=n%10;
		sum=sum+a*a*a;
		rev=rev*10+a;
		n=n/10;
	}
	if(m==rev)
	{
		printf("%d is palindrome.\n",m);
	}
	else
	{
		printf("%d is not palindrome.\n",m);
	}
	if(m==sum)
	{
		printf("%d is armstrong.",m);
	}
	else
	{
		printf("%d is not armstrong.",m);
	}
}
