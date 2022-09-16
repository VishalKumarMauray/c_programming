#include<stdio.h>
void main()
{
	int i=5;
	printf("using while loop\n");
	while(i>0)
	{
		printf("Ashish\n");
		i--;
	}
	i=5;
	printf("\n\nusing do while loop\n");
	do
	{
		printf("Ashish\n");
		i--;
	}while(i>0);
	printf("\n\nusing for loop\n");
	for(i=0;i<5;i++)
	{
		printf("Ashish\n");
	}
}
