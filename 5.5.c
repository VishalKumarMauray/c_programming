#include<stdio.h>
void main()
{
	int m,p,c,a,b;
	printf("enter the marks in physics, chemistry and maths ");
	scanf("%d%d%d",&p,&c,&m);
	a=m+p+c;
	b=m+p;
	if(m>60 && p>=50 && c>=40)
	{
		if(a>=200 || b>=150)
		{
			printf("you are elligible\nCongratulation.");
		}
	}
	else
	{
		printf("you are not elligible");
	}
}
