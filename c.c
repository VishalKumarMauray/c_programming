#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<5;i++)
	{
		if(i>6)
		{
			printf(" a ");
			continue;
		}
		printf(" b ");
	}
	printf(" out ");
}
