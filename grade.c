#include<stdio.h>
void main()
{
	int m;
	printf("enter the marks out of 100\n");
	scanf("%d",&m);
	if(m>=0 && m<=100)
	{
		if(m>60)
		{
			printf("FIRST");
		}
		if(m>=40 && m<60)
		{
			printf("SECOUND");
		}
		if(m>=30 && m<40)
		{
			printf("THIRD");
		}
		if(m<30)
		{
			printf("FAIL");
		}
	}
	else
	{
		printf("WRONG INPUT");
	}
}
