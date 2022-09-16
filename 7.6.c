#include<stdio.h>
void main()
{
	int a[5],b[5],c[10],i;
	printf("Enter the elements of 1st array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	printf("\nenter the elements of 2nd array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
		c[i+5]=b[i];
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",c[i]);
	}
}
