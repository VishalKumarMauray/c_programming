#include<stdio.h>
void main()
{
	int m,n;
	printf("Enter the value of m and n ");
	scanf("%d%d",&m,&n);
	if(m%n==0)
	{
		printf("m is multiple of n");
	}	
	else
	{
		printf("m is not a multiple of n");
	}
}
