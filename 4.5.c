#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("Enter two 2-digit number for multiplication ");
	scanf("%d%d",&a,&b);
	d=b;
	printf("\n\t        %d\n",a);
	printf("\n\t      X %d\n",b);
	printf("\n\t-------------\n");
	while(b>0)
	{
		c=b%10;
		printf("\n%d X %d is    %d\n",c,a,a*c);
		b=b/10;
	}
	printf("\n\t-------------\n");
	printf("\nAdd them    %d\n",a*d);
	printf("\n\t-------------\n");
}
