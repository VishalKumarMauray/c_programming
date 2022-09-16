#include<stdio.h>
void main()
{
	int i,sum=0,a[10];
	printf("enter the numbers ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum of the digits is %d",sum);
}
