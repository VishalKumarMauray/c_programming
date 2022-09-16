#include<Stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	float x1;
	printf("Enter the values of a,b,c ");
	scanf("%d%d%d",&a,&b,&c);
	d=sqrt((b*b)-(4*a*c));
	x1=(-b+d)/(2*a);
	printf("First root is %.2f\n",x1);
	x1=(-b-d)/(2*a);
	printf("Second root is %.2f\n",x1);
}
