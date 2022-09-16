#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10],a1,b[10],b1;
	float sum1=0.00,sum2=0.00,net=0.0;
	printf("***Only 10 items of each part is allowed***\nEnter how many handloom item you purchased ");
	scanf("%d",&a1);
	printf("Enter the amount of each handloom item ");
	for(i=0;i<a1;i++)
	{
		scanf("%d",&a[i]);
		sum1=sum1+a[i];
	}
	printf("\nEnter how many mill cloth you purchased ");
	scanf("%d",&b1);
	printf("Enter the amount of each mill cloth item ");
	for(i=0;i<b1;i++)
	{
		scanf("%d",&b[i]);
		sum2=sum2+b[i];
	}
	if(sum1>300)
	{
		printf("\nYou get 15%% Discount in %.2f that is %.2f\n",sum1,sum1*.15);
		sum1=sum1-sum1*.15;
	}
	else if(sum1>200)
	{
		printf("\nYou get 10%% Discount in %.2f that is %.2f\n",sum1,sum1*.10);
		sum1=sum1-sum1*.10;
	}
	else if(sum1>100)
	{
		printf("\nYou get 7.5%% Discount in %.2f that is %.2f\n",sum1,sum1*.075);
		sum1=sum1-sum1*.075;
	}
	else
	{
		printf("\nYou get 5%% Discount in %.2f that is %.2f\n",sum1,sum1*.005);
		sum1=sum1-sum1*.005;
	}
	if(sum2>300)
	{
		printf("\nYou get 10%% Discount in %.2f that is %.2f\n",sum2,sum2*.10);
		sum2=sum2-sum2*.10;
	}
	else if(sum2>200)
	{
		printf("\nYou get 7.5%% Discount in %.2f that is %.2f\n",sum2,sum2*.075);
		sum2=sum2-sum2*.075;
	}
	else
	{
		printf("\nYou get 5%% Discount in %.2f that is %.2f\n",sum2,sum2*.005);
		sum2=sum2-sum2*.005;
	}
	printf("-----------------------------------------------------------");
	net=sum1+sum2;
	printf("\nNet amount=%.2f",net);
}
