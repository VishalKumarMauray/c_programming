#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the first number ");
	scanf("%d",&a);
	printf("enter the secound number ");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
}
int add(int x,int y)
{
	printf(" %d + %d = %d \n",x,y,x+y);
}
int sub(int x,int y)
{
	printf(" %d - %d = %d \n",x,y,x-y);
}
