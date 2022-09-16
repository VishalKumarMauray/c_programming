#include<stdio.h>
void main()
{
	int a[50],i,b,sum=0;
	float avg;
	printf("enter how many number you want to enter maximum limit is 50\n");
	scanf("%d",&b);
	if(b>-1 && b<51)
	{
		printf("enter the numbers one by one\n");
		for(i=0;i<b;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		avg=sum/b;
		printf("average of ");
		for(i=0;i<b;i++)
		{
			printf("%d ",a[i]);
		}
		printf("is %f",avg);
	}
	else
	{
		printf("out of limit");
	}
}
