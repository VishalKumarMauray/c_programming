#include<stdio.h>
void main()
{
	float a,c,f;
	printf("1 for celcius and 2 for fahrenheit\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("enter the temperature in celcius ");
	    scanf("%f",&c);
	    f=((9*c)/5)+32;
	    printf("temperature in fahrenheit %f",f);
	}
	else
	{
		printf("enter the temperature in fahrenheit ");
		scanf("%f",&f);
		c=((f-32)*5)/9;
		printf("temperature in celcius %f",c);
	}
}
