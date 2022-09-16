#include<stdio.h>
void main()
{
	int n;
	float a;
	printf("number of call ");
	scanf("%d",&n);
	if(n>100)
	{
		a=n-100;
		a=a*1.25;
		printf("Bill is %f",250+a);
	}
	else
	{
		printf("Bill is 250");
	}
}
