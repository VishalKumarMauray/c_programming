//program using a user defined function
#include<stdio.h>
int mul(int x, int y);
void main()
{
	int a=2,b=3,c;
	c=mul(a,b);
	printf("multiplication of two no. is %d",c);
}
int mul(int x, int y)
{
	int z;
    z=x*y;
    return(z);
}
