#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the number for multiplication table ");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		printf("  %d X %d = %d\n",n,i,i*n);
	}
}
