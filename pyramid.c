#include<Stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[9]={1,2,3,4,5,6,7,8,9};
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("+");
		}
		for(j=0;j<=i;j++)
		{
		printf("+");
		}
		printf("\n");
	}
}
