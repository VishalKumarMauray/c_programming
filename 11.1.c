#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,*ptr;
	printf("Enter array element ");
	for(i=9;i>=0;i--)
	{
		scanf("%d",&a[i]);
		ptr=a;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",*ptr);
		ptr++;	
	}
}
