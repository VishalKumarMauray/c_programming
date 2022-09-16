#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,t;
	float p;
	printf("enter marks out off 100\n");
	printf("enter the marks of first subject ");
	scanf("%d",&s1);
	printf("enter the marks of secound subject ");
	scanf("%d",&s2);
	printf("enter the marks of third subject ");
	scanf("%d",&s3);
	printf("enter the marks of fourth subject ");
	scanf("%d",&s4);
	printf("enter the marks of fifth subject ");
	scanf("%d",&s5);
	t=s1+s2+s3+s4+s5;
	p=t/5;
	printf("total marks=%d\n",t);
	printf("percentage=%.2f",p);
}
