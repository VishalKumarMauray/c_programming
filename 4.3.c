#include<stdio.h>
#include<conio.h>
void main()
{
	int a,flag=0;
	float n;
	printf("enter the number ");
	scanf("%f",&n);
	a=n*10;
	if(a%10>5 || a%10<-5)
	{
		flag=1;
	}
	if(flag==1)
	{
		a=a/10;
		a++;
		printf("%d",a);
	}
	else
	{
		a=a/10;
		printf("%d",a);
	}
}
