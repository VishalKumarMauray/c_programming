#include<stdio.h>
#include<math.h>
void main()
{
	int z,a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	z=sqrt(pow((a-b),2)*pow((a+b),2));
	printf("value of x is %d",z);
	
}
