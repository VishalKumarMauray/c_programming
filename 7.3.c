#include<stdio.h>
void main()
{
	int a[5],n,i,c6=0,c1=0,c2=0,c3=0,c4=0,c5=0;
	printf("Candidates name and vote no.\n01\tVishal\n02\tHarshit\n03\tKamoo\n04\tAyush\n05\tVeeru\n");
	printf("\nEnter the number of candidates ");
	scanf("%d",&n);
	printf("\nenter the vote number to vote.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==1)
		{
			c1++;
		}
		else if(a[i]==2)
		{
			c2++;
		}
		else if(a[i]==3)
		{
			c3++;
		}
		else if(a[i]==4)
		{
			c4++;
		}
		else if(a[i]==5)
		{
			c5++;
		}
		else
		{
			c6++;
		}
	}
	printf("\n***RESULT***\n");
	printf("Vishal = %d\nHarshit = %d\nKamoo = %d\nAyush = %d\nVeeru = %d\n",c1,c2,c3,c4,c5);
	printf("No. of candidate vote not count because of wrong entry = %d",c6);
	printf("\n\n Winner is ");
	if(c1>c2 && c1>c3 && c1>c4 && c1>c5)
	{
		printf("Vishal");
	}
	if(c2>c1 && c2>c3 && c2>c4 && c2>c5)
	{
		printf("Harshit");
	}
	else if(c3>c2 && c3>c1 && c3>c4 && c3>c5)
	{
		printf("Kamoo");
	}
	else if(c4>c2 && c4>c3 && c4>c1 && c4>c5)
	{
		printf("Ayush");
	}
	else if(c5>c2 && c5>c3 && c5>c4 && c5>c1)
	{
		printf("Veeru");
	}
	else
	{
		printf(" no one");
	}
}
