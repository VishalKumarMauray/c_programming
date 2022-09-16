#include<stdio.h>
void main()
{
	int *ptr,a;
	printf("enter the number ");
	scanf("%d",&a);
	ptr=&a;
	printf("entered number is %d",*ptr);
}
