#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=1,flag=0;
	do
	{
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
		if(flag==0)
		{
			printf("%d ",n);
		}
		n++;
		flag=0;
	}while(n<101);
}
