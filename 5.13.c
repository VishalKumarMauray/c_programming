#include<stdio.h>
void main()
{
	int i,sum1=0,sum2=0;
	printf("Number that are divisible by 6 but not divisible by 4 between 0 to 100 are\n");
	for(i=1;i<101;i++)
	{
		if(i%6==0 && i%4!=0)
		{
			printf("%d ",i);
			sum1=sum1+i;
		}
	}
	printf(" and the sum of these numbers is %d",sum1);
	printf("\n\nNumber that are not divisible by 2 and 3 between 0 to 100 are\n");
	for(i=1;i<101;i++)
	{
		if(i%2!=0 && i%3!=0)
		{
			printf("%d ",i);
			sum2=sum2+i;
		}
	}
	printf("\nand the sum of these numbers is %d",sum2);
}
