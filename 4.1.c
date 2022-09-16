#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char a[20];
	printf("enter the string ");
	for(i=0;i<20;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("************\n");
	for(i=0;i<20;i++)
	{
		if(a[i]==' ')
		{
			printf("\n");
		}
		else
		{
			printf("%c",a[i]);
		}
	}
	printf("\n************\n");
	printf("%c.",a[0]);
	for(i=0;i<20;i++)
	{
		if(a[i]==' ')
		{
			printf("%c.",a[i+1]);
		}
	}
}
