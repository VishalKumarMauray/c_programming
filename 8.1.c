#include<stdio.h>
int space();
void main()
{
	int a,b,x;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	printf("enter the number how many space you want between numbers ");
	scanf("%d",&x);
	space(a,b,x);
}
int space(int a,int b,int c)
{
	printf("%d",a);
	while(c>0)
	{
		printf(" ");
		c--;
	}
	printf("%d",b);
}
