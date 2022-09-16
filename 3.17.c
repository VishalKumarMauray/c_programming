#include<stdio.h>
#include<math.h>
void main()
{
	int i=0;
	printf("x\tsin(x)\tcos(x)\n");
	for(i=0;i<=90;i=i+15)
	{
		printf("%d\t%.2f\t%.2f\n",i,sin(i),cos(i));
	}
}
