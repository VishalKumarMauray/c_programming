#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("AND Operator\n");
	if(a==1 && b==1)
	{
		c=1;
	}
	else
	{
		c=0;
	}
	printf("%d && %d = %d",a,b,c);
	printf("\nOR Operator\n");
	if(a==1 || b==1)
	{
		c=1;
	}
	else
	{
		c=0;
	}
	printf("%d || %d = %d",a,b,c);
	printf("\nNOT Operator\n");
	if(a!=1)
	{
		c=1;
	}
	else
	{
		c=0;
	}
	printf("%d! = %d",a,c);
}
