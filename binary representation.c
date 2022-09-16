#include<stdio.h>
void main()
{
	int c[10],i=0,j,a,n,que,rem;
	printf("enter the number ");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		que=n/2;
		rem=n%2;
		n=que;
		c[i]=rem;
		i++;
	}
	printf("The binary representation of %d is ",a);
	for(j=i-1;j>=0;j--)
	{
		printf("%d",c[j]);
	}
}
