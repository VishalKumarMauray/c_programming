#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],flag=1,i,*ptr1,*ptr2;
	printf("Enter first array element ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		ptr1=a;
	}
	printf("Enter second array element ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
		ptr2=b;
	}
	for(i=0;i<10;i++)
	{
		if(*ptr1!=*ptr2)
		{
			flag=0;
			ptr1++;ptr2++;		
		}
	}
	if(flag==0)
	{
		printf("Arrays are not identical\n");
	}
	else
	{
		printf("Arrays are identical\n");
	}
}
