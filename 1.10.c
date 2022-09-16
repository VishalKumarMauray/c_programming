#include<stdio.h>
#include<math.h>
void main()
{
	float q,a,b,c,s,x,y,z,w;
	printf("enter the sides of triangle ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	x=s-a;
	y=s-b;
	z=s-c;
	w=s*x*y*z;
	printf("the value of s is %f\n",s);
	printf("area of traiangle inside underroot is %f\n",w);
	q=sqrt(s*x*y*z);
	printf("area of triangle is %f",q);
}
