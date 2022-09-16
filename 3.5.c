#include<stdio.h>
void main()
{
	int m,n,i,j,a[5],b=4;
	printf("enter the five digit number ");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		m=n%10;
		a[i]=m;
		n=n/10;
	}
	for(j=0;j<5;j++)
	{
    	for(i=b;i>=0;i--)
    	{
    		printf("%d",a[i]);
		}
		b--;
		printf("\n");
	}
}
