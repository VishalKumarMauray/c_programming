#include<stdio.h>
void main()
{
	int a[5],i,count=0;
	printf("enter five numbers ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			count++;
		}
	}
	printf("negative numbers are %d\npositive numbers are %d.",count,5-count);
}
