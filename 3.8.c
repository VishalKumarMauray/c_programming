#include<stdio.h>
void main()
{
	int h,m,s,u,a,d;
	printf("Enter the initial velocity ");
	scanf("%d",&u);
	printf("\nEnter the acceleration ");
	scanf("%d",&a);
	printf("\nEnter the time\nhours ");
	scanf("%d",&h);
	printf("minutes ");
	scanf("%d",&m);
	printf("secound ");
	scanf("%d",&s);
	m=m+h*60;
	s=s+m*60;
	d=u*s+((a*s*s)/2);
	printf("distance travelled by a vehicle is %d ",d);
}
