#include<stdio.h>
void main()
{
	int n,p,c;
	float rs;
	printf("enter the current month unit in meter ");
	scanf("%d",&n);
	printf("enter the previous month unit ");
	scanf("%d",&p);
	c=n-p;
	if(c<=200)
	{
		rs=c*0.80;
	}
	else if(c>200 && c<=300)
	{
		rs=c*0.90;
	}
	else if(c>300 && c<=400)
	{
		rs=c;
	}
	else
	{
		rs=c*.15;
		rs=rs+c;
	}
	printf("your this month bill is %f Rs.",rs);
}
