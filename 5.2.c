#include<stdio.h>
void main()
{
	int i,count=0;
	for(i=100;i<201;i++)
	{
		if(i%7==0)
		{
			count=count+i;
		}
	}
	printf("%d",count);
}
