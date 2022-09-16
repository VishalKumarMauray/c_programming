#include<stdio.h>
void main()
{
	int d,i,r,x,rev=0;
	for(i=5;i!=0;i=i/10)
	{
		r=i%10;
		
		rev=rev*10+r;
	}
	for(x=rev;x!=0;x=x/10)
	{
		d=x%10;
		printf("%d",d);
	}
}
