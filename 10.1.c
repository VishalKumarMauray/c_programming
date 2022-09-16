#include<stdio.h>
void main()
{
	int h,m,s,a;
	printf("***TIME DISPLAY***\n");
	printf("enter the hours ");
	scanf("%d",&h);
	printf("enter the minutes ");
	scanf("%d",&m);
	printf("enter the secounds ");
	scanf("%d",&s);
	if(h<25 && h>-1)
	{
		if(m<61 && m>-1)
		{
			if(s<61 && s>-1)
			{
				printf("\n%d:%d:%d\n",h,m,s);	
			}
			else
			{
				printf("value of secound is wrong");
			}
		}
		else
		{
			printf("value of minutes is wrong");
		}
	}
	else
	{
		printf("value of hour is wrong");
	}
	printf("\nenter 1 if %d:%d:%d is shown ",h,m,s);
	scanf("%d",&a);
	if(a==1)
	{
		update(h,m,s);
	}
}
int update(int x,int y,int z)
{
	int a;
	printf("\nenter the value you want to increase in secound ");
	scanf("%d",&a);
	z=z+a;
	if(z>60)
	{
		a=z-60;
		z=60;
		y=y+a;
		if(y>60)
		{
			a=y-60;
			y=60;
			z=z+a;
		}
	}
	printf("after adding\n%d:%d:%d",x,y,z);
}
