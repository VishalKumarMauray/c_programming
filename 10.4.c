#include<stdio.h>

int enter();
int check();
int print();
int leap();

void main()
{
	int date,month,year;
	printf("format:00 00 0000\nenter the date,month and year ");
	scanf("%d%d%d",&date,&month,&year);
	enter(date,month,year);
	check(date,month,year);
	print(date,month,year);
}

int enter(int d,int m,int y)
{
	printf("***ENTER FUNCTION***\ndate=%d\nmonth=%d\nyear=%d\n",d,m,y);
	if(d>31 || d<0)
	{
		printf("date is not valid\n");
	}	
	if(m>12 || m<0)
	{
		printf("month is not valid\n");
	}
}

int check(int dat,int mon,int yea)
{
	printf("\n***CHECK FUNCTION***\ndate=%d\nmonth=%d\nyear=%d\n",dat,mon,yea);
	int x;
	switch(mon)
	{
		case 1:
			if(dat>31)
			{
				printf("\njanuary contain 31 days\n");
			}
			break;
		
		case 2:
			if(dat<30)
			{
				x=leap(yea);
				if(x==1)
				{
					printf("%d is not a leap year\n",yea);	
				}	
			}
			break;
			
		case 3:
			if(dat>31)
			{
				printf("\nmarch contain 31 days\n");
			}
			break;
			
		case 4:
			if(dat>30)
			{
				printf("\napril contain 31 days\n");
			}
			break;
			
		case 5:
			if(dat>31)
			{
				printf("\nmay contain 31 days\n");
			}
			break;
			
		case 6:
			if(dat>30)
			{
				printf("\njune contain 31 days\n");
			}
			break;
			
		case 7:
			if(dat>31)
			{
				printf("\njuly contain 31 days\n");
			}
			break;
			
		case 8:
			if(dat>31)
			{
				printf("\naugust contain 31 days\n");
			}
			break;
			
		case 9:
			if(dat>30)
			{
				printf("\nseptember contain 31 days\n");
			}
			break;
			
		case 10:
			if(dat>31)
			{
				printf("\noctober contain 31 days\n");
			}
			break;
			
		case 11:
			if(dat>30)
			{
				printf("\nnovember contain 31 days\n");
			}
			break;
			
		case 12:
			if(dat>31)
			{
				printf("\ndecember contain 31 days\n");
			}
			break;
	}
}

int print(int da,int mo,int ye)
{
	printf("\n***PRINT FUNCTION***\ndate=%d\nmonth=%d\nyear=%d\n",da,mo,ye);
	int x;
	switch(mo)
	{
		case 1:
			printf("\nJanuary %d,%d\n",da,ye);
			break;
		
		case 2:
			printf("February %d,%d\n",da,ye);
			break;
			
		case 3:
			printf("\nmarch %d,%d\n",da,ye);
			break;
			
		case 4:
			printf("\napril %d,%d\n",da,ye);
			break;
			
		case 5:
			printf("\nmay %d,%d\n",da,ye);
			break;
			
		case 6:
			printf("\njune %d,%d\n",da,ye);
			break;
			
		case 7:
			printf("\njuly %d,%d\n",da,ye);
			break;
			
		case 8:
			printf("\naugust %d,%d\n",da,ye);
			break;
			
		case 9:
			printf("\nseptember %d,%d\n",da,ye);
			break;
			
		case 10:
			printf("\noctober %d,%d\n",da,ye);
			break;
			
		case 11:
			printf("\nnovember %d,%d\n",da,ye);
			break;
			
		case 12:
			printf("\ndecember %d,%d\n",da,ye);
			break;
	}
}

int leap(int a)
{
	printf("\n***LEAP FUNCTION***\nyear=%d\n",a);
	int b=1;
	printf("\n%d\n",a);
	if(a%4==0)
	{
		b=0;
	}
	return b;
}
