#include<stdio.h>
void main()
{	
	int temp,z,y,x,w,i,j,k,ar[5],count=0,rem,sum=0,avg,flag=0,prev=0,cur=1,que,cr[10],dr[10],br[5],lar=-9999,sma=9999,arr[3][3],brr[3][3],crr[3][3],date,month,year,*ptr1,*ptr2; 
	float pie=3.14,a,b,c,d,e,f,g;
	do
	{
		printf("\n\nEnter 1 for area of circle\n");
		printf("Enter 2 for multiplication table\n");
		printf("Enter 3 for temperature change\n");
		printf("Enter 4 for distance between two points\n");
		printf("Enter 5 for count negative and positive number\n");
		printf("Enter 6 for area and parameter of rectangle\n");
		printf("Enter 7 for pattern by entered number\n");
		printf("Enter 8 for distance travelled by bike\n");
		printf("Enter 9 for sum of digits\n");
		printf("Enter 10 for greater and smaller\n");
		printf("Enter 11 for round off number\n");
		printf("Enter 12 for normal multiplication format\n");
		printf("Enter 13 for forms right angled triangle\n");
		printf("Enter 14 for electricity bill\n");
		printf("Enter 15 for prime number\n");
		printf("Enter 16 for factorial\n");
		printf("Enter 17 for fibonacci series\n");
		printf("Enter 18 for decimal to binary convertor\n");
		printf("Enter 19 for merge array\n");
		printf("Enter 20 for greatest and smallest element in array,addition,substraction and multiplication\n");
		printf("Enter 21 for number in words\n");
		printf("Enter 22 for calendar,leap year\n");
		printf("Enter 23 for reverse array element\n");
		printf("Enter 24 for Two array are same\n");	
		printf("Enter 25 for palindrome and armstrong\n");	
		
		printf("Enter 0 for exit\n");
		
		scanf("%d",&temp);
		switch(temp)
		{
			case 1:
				printf("enter the radius of the circle ");
				scanf("%f",&b);
				a=pie*b*b;
				printf("area of the circle is %f",a);
				getch();
				break; 
				
			case 2:
				printf("enter the number for multiplication table ");
				scanf("%d",&z);
				for(i=1;i<11;i++)
				{
					printf("  %d X %d = %d\n",z,i,i*z);
				}
				getch();
				break;
				
			case 3:
				printf("1 for celcius and 2 for fahrenheit\n");
				scanf("%d",&a);
				if(a==1)
				{
					printf("enter the temperature in celcius ");
	    			scanf("%f",&c);
	    			b=((9*c)/5)+32;
	    			printf("temperature in fahrenheit %f",b);
				}
				else
				{
					printf("enter the temperature in fahrenheit ");
					scanf("%f",&b);
					c=((b-32)*5)/9;
					printf("temperature in celcius %f",c);
				}
				getch();
				break;
				
			case 4:
				printf("enter the value of (x1,y1) ");
				scanf("%f%f",&a,&c);
				printf("enter the value of (x2,y2) ");
				scanf("%f%f",&b,&e);
				f=(b-a)*(b-a);
				g=(e-c)*(e-c);
				d=sqrt(f+g);
				printf("distance between two points is %f",d);
				getch();		
				break;
				
			case 5:
				
				printf("enter five numbers ");
				for(i=0;i<5;i++)
				{
					scanf("%d",&ar[i]);
					if(ar[i]<0)
					{
						count++;
					}
				}
				printf("negative numbers are %d\npositive numbers are %d.",count,5-count);
				getch();
				break;
				
			case 6:
				printf("enter the length and bredth of the rectangle ");
				scanf("%d%d",&w,&x);
				y=w*x;
				z=2*(w+x);
				printf("Area is %d\nParameter is %d",y,z);
				getch();
				break;
				
			case 7:
				y=4;
				printf("enter the five digit number ");
				scanf("%d",&x);
				for(i=0;i<5;i++)
				{
					w=x%10;
					ar[i]=w;
					x=x/10;
				}
				for(j=0;j<5;j++)
				{
    				for(i=y;i>=0;i--)
    				{
    					printf("%d",ar[i]);
					}
					y--;
					printf("\n");
				}
				getch();
				break;
				
			case 8:
				printf("Enter the initial velocity ");
				scanf("%d",&x);
				printf("\nEnter the acceleration ");
				scanf("%d",&y);
				printf("\nEnter the time\nhours ");
				scanf("%d",&i);
				printf("minutes ");
				scanf("%d",&j);
				printf("secound ");
				scanf("%d",&w);
				j=j+i*60;
				w=w+j*60;
				z=x*w+((y*w*w)/2);
				printf("distance travelled by a vehicle is %d ",z);
				getch();
				break;
				
			case 9:
				printf("enter the number ");
				scanf("%d",&z);
				printf("entered number is %d\n",z);
				while(z!=0)
				{
					rem=z%10;
					sum=sum+rem;
					z=z/10;
				}
				printf("sum of digits is %d",sum);
				getch();
				break;
				
			case 10:
				printf("enter the numbers ");
				scanf("%d%d%d",&x,&y,&z);
				sum=x+y+z;
				avg=(x+y+z)/3;
				printf("Sum of numbers %d\nAverage of numbers %d\n",sum,avg);
				if(x>y && x>z)
				{
					printf("a is greater\n");
				}
				else if(y>z && y>x)
				{
					printf("b is greater\n");
				}
				else
				{
					printf("c is greater\n");
				}
				if(x<y && x<z)
				{
					printf("a is smaller");
				}
				else if(y<x && y<z)
				{
					printf("b is smaller");
				}
				else
				{
					printf("c is smaller");
				}
				getch();
				break;
				
			case 11:
				printf("enter the number ");
				scanf("%f",&a);
				z=a*10;
				if(z%10>5 || z%10<-5)
				{
					flag=1;
				}
				if(flag==1)
				{
					z=z/10;
					z++;
					printf("%d",z);
				}
				else
				{
					z=z/10;
					printf("%d",z);
				}
				getch();
				break;
				
			case 12:
				printf("Enter two 2-digit number for multiplication ");
				scanf("%d%d",&w,&x);
				z=x;
				printf("\n\t        %d\n",w);
				printf("\n\t      X %d\n",x);
				printf("\n\t-------------\n");
				while(x>0)
				{
					y=x%10;
					printf("\n%d X %d is    %d\n",y,w,w*y);
					x=x/10;
				}
				printf("\n\t-------------\n");
				printf("\nAdd them    %d\n",w*z);
				printf("\n\t-------------\n");
				getch();
				break;
				
			case 13:
				printf("enter the largest side of the triangle first then the remaining two sides ");
				scanf("%d%d%d",&x,&y,&z);
				if((x*x)==(z*z)+(y*y))
				{
					printf("the entered sides forms the right angled triangle.");
				}
				else
				{
					printf("the entered sides does not form the right angled triangle.");
				}
				getch();
				break;
				
			case 14:
				
				printf("enter the current month unit in meter ");
				scanf("%d",&x);
				printf("enter the previous month unit ");
				scanf("%d",&y);
				z=x-y;
				if(z<=200)
				{
					a=z*0.80;
				}
				else if(z>200 && z<=300)
				{
					a=z*0.90;
				}
				else if(z>300 && z<=400)
				{
					a=z;
				}
				else
				{
					a=z*.15;
					a=a+z;
				}
				printf("your this month bill is %f Rs.",a);
				getch();
				break;
				
			case 15:
				printf("enter the positive number except 0 and 1 \n");
				scanf("%d",&x);
				z=prime(x);
				if(z==1)
				{
					printf("entered number is not prime");
				}
				else
				{
					printf("entered number is prime");
				}
				
				getch();
				break;
				
			case 16:
				
				printf("enter the number ");
				scanf("%d",&z);
				while(z>=1)
				{
					y=y*z;
					z--;
				}
				printf("the factorial of the number is %d",y);
				getch();
				break;
			
			case 17:
				printf("enter the number ");
				scanf("%d",&z);
				printf("1 ");
				do
				{
					sum=prev+cur;
					prev=cur;
					cur=sum;
					z--;
					printf("%d ",sum);
				}while(z>0);
				getch();
				break;
			
			case 18:
				i=0;
				printf("enter the number ");
				scanf("%d",&z);
				y=z;
				while(z>0)
				{
					que=z/2;
					rem=z%2;
					z=que;
					cr[i]=rem;
					i++;
				}
				printf("The binary representation of %d is ",y);
				for(j=i-1;j>=0;j--)
				{
					printf("%d",cr[j]);
				}
				getch();
				break;
			
			case 19:
				printf("Enter the elements of 1st array ");
				for(i=0;i<5;i++)
				{
					scanf("%d",&ar[i]);
					cr[i]=ar[i];
				}
				printf("\nenter the elements of 2nd array ");
				for(i=0;i<5;i++)
				{
					scanf("%d",&br[i]);
					cr[i+5]=br[i];
				}
				for(i=0;i<10;i++)
				{
					printf("%d ",cr[i]);
				}
			getch();
				break;
			
			case 20:
				printf("Enter the first matrix\n");
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						scanf("%d",&arr[i][j]);
						if(sma>=arr[i][j])
						{
							sma=arr[i][j];
						}
						if(lar<=arr[i][j])
						{
							lar=arr[i][j];
						}
					}
				}
				printf("smallest element in matrix %d\nlargest element in matrix %d\n",sma,lar);
				printf("Enter the secound matrix\n");
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						scanf("%d",&brr[i][j]);
						if(sma>=brr[i][j])
						{
							sma=brr[i][j];
						}
						if(lar<=brr[i][j])
						{
							lar=brr[i][j];
						}
					}
				}
				printf("smallest element in matrix %d\nlargest element in matrix %d\n",sma,lar);
				printf("\n  Enter 1 for addition\n\t2 for substraction\n\t3 for multiplication\n");
				scanf("%d",&z);
				switch(z)
				{
					case 1:
					printf("ADDITION\n");
					for(i=0;i<3;i++)
					{		
						for(j=0;j<3;j++)
						{
							crr[i][j]=arr[i][j]+brr[i][j];
							printf("%d ",crr[i][j]);
						}
						printf("\n");
					}
					break;
				
					case 2:
					printf("SUBSTRACTION\n");
					for(i=0;i<3;i++)
					{		
						for(j=0;j<3;j++)
						{
							crr[i][j]=arr[i][j]-brr[i][j];
							printf("%d ",crr[i][j]);
						}
						printf("\n");
					}
					break;	  
					
					case 3:
					printf("MULTIPLICATION\n");
					for(i=0;i<3;i++)
					{		
						for(j=0;j<3;j++)
						{
							for(k=0;k<3;k++)
							{
								crr[i][j]=crr[i][j]+arr[i][k]*brr[k][j];
							}
							printf("%d ",crr[i][j]);
						}
						printf("\n");
					}
					break; 
				}
				getch();
				break;
			
			case 21:
					printf("enter the number ");
					scanf("%f",&a);
				    y=a*100;
					z=y/100000;
					switch(z)
					{
						case 0:
							printf(" ");
							break;
							
						case 1:
							printf("One thousand ");
							break;
						
						case 2:
							printf("Two thousand ");
							break;
						
						case 3:
							printf("Three thousand ");
							break;
						
						case 4:
							printf("Four thousand ");
							break;
						
						case 5:
							printf("Five thousand ");
							break;
						
						case 6:
							printf("Six thousand ");
							break;
						
						case 7:
							printf("Seven thousand ");
							break;
						
						case 8:
							printf("Eight thousand ");
							break;
						
						case 9:
							printf("Nine thousand ");
							break;
						
					}
					z=y/10000;
					z=z%10;
					switch(z)
					{
						case 0:
							printf(" ");
							break;
							
						case 1:
							printf("One hundread ");
							break;
						
						case 2:
							printf("Two hundread ");
							break;
						
						case 3:
							printf("Three hundread ");
							break;
						
						case 4:
							printf("Four hundread ");
							break;
						
						case 5:
							printf("Five hundread ");
							break;
						
						case 6:
							printf("Six hundread ");
							break;
						
						case 7:
							printf("Seven hundread ");
							break;
						
						case 8:
							printf("Eight hundread ");
							break;
						
						case 9:
							printf("Nine hundread ");
							break;
						
					}
					z=y/1000;
					z=z%10;
					switch(z)
					{
						case 0:
							printf(" ");
							break;
							
						case 1:
							z=y/100;
							z=z%10;
							switch(z)
							{
								case 0:
									printf(" ");
									break;
							
								case 1:
									printf("Eleven Rupees and ");
									break;
							
								case 2:
									printf("Twelve Rupees and ");
									break;
						
								case 3:
									printf("Thirteen Rupees and ");
									break;
						
								case 4:
									printf("Fourteen Rupees and ");
									break;
							
								case 5:
									printf("Fifteen Rupees and ");
									break;
						
								case 6:
									printf("Sixteen Rupees and ");
									break;
						
								case 7:
									printf("Seventeen Rupees and ");
									break;
						
								case 8:
									printf("Eighteen Rupees and ");
									break;
						
								case 9:
									printf("Nineteen Rupees and ");
									break;
							
							}
							break;
						
						case 2:
							printf("Twenty ");
							break;
						
						case 3:
							printf("Thirty ");
							break;
						
						case 4:
							printf("Fourty ");
							break;
						
						case 5:
							printf("Fifty ");
							break;
						
						case 6:
							printf("Sixty ");
							break;
						
						case 7:
							printf("Seventy ");
							break;
						
						case 8:
							printf("Eighty ");
							break;
						
						case 9:
							printf("Ninety ");
							break;
						
					}
					z=y/1000;
					z=z%10;
					if(z!=1)
					{
						z=y/100;
						z=z%10;
						switch(z)
						{
						case 0:
							printf(" ");
							break;
							
						case 1:
							printf("One Rupees and ");
							break;
						
						case 2:
							printf("Two Rupees and ");
							break;
						
						case 3:
							printf("Three Rupees and ");
							break;
						
						case 4:
							printf("Four Rupees and ");
							break;
						
						case 5:
							printf("Five Rupees and ");
							break;
						
						case 6:
							printf("Six Rupees and ");
							break;
						
						case 7:
							printf("Seven Rupees and ");
							break;
						
						case 8:
							printf("Eight Rupees and ");
							break;
						
						case 9:
							printf("Nine Rupees and ");
							break;
						
						}
					
					}
					z=y/10;
					z=z%10;
					switch(z)
					{
						case 0:
							printf(" ");
							break;
							
						case 1:
							z=y/1;
							z=z%10;
							switch(z)
							{
								case 0:
									printf(" ");
									break;
							
								case 1:
									printf("Eleven Paise");
									break;
							
								case 2:
									printf("Twelve Paise");
									break;
						
								case 3:
									printf("Thirteen Paise");
									break;
						
								case 4:
									printf("Fourteen Paise");
									break;
							
								case 5:
									printf("Fifteen Paise");
									break;
						
								case 6:
									printf("Sixteen Paise");
									break;
						
								case 7:
									printf("Seventeen Paise");
									break;
						
								case 8:
									printf("Eighteen Paise");
									break;
						
								case 9:
									printf("Nineteen Paise");
									break;
							
							}
							break;
						
						case 2:
							printf("Twenty ");
							break;
						
						case 3:
							printf("Thirty ");
							break;
						
						case 4:
							printf("Fourty ");
							break;
						
						case 5:
							printf("Fifty ");
							break;
						
						case 6:
							printf("Sixty ");
							break;
						
						case 7:
							printf("Seventy ");
							break;
						
						case 8:
							printf("Eighty ");
							break;
						
						case 9:
							printf("Ninety ");
							break;
						
					}
					
					z=y/1;
					z=z%10;
					switch(z)
						{
						case 0:
							printf(" ");
							break;
							
						case 1:
							printf("One Paise");
							break;
						
						case 2:
							printf("Two Paise");
							break;
						
						case 3:
							printf("Three Paise");
							break;
						
						case 4:
							printf("Four Paise");
							break;
						
						case 5:
							printf("Five Paise");
							break;
						
						case 6:
							printf("Six Paise");
							break;
						
						case 7:
							printf("Seven Paise");
							break;
						
						case 8:
							printf("Eight Paise");
							break;
						
						case 9:
							printf("Nine Paise");
							break;
						
						}
						getch();
				break;
				
			case 22:
				
				printf("format:00 00 0000\nenter the date,month and year ");
				scanf("%d%d%d",&date,&month,&year);
				enter(date,month,year);
				check(date,month,year);
				print(date,month,year);
				break;
				
			case 23:
				printf("Enter array element ");
				for(i=9;i>=0;i--)
				{
					scanf("%d",&cr[i]);
					ptr1=cr;
				}
				for(i=0;i<10;i++)
				{
					printf("%d ",*ptr1);
					ptr1++;	
				}
				break;
				
			case 24:
				flag=1;
				printf("Enter first array element ");
				for(i=0;i<10;i++)
				{
					scanf("%d",&cr[i]);
					ptr1=cr;
				}
				printf("Enter second array element ");
				for(i=0;i<10;i++)
				{
					scanf("%d",&dr[i]);
					ptr2=dr;
				}
				for(i=0;i<10;i++)
				{
					if(*ptr1!=*ptr2)
					{
						flag=0;
						ptr1++;ptr2++;		
					}
				}
				if(flag==0)
				{
					printf("Arrays are not identical\n");
				}
				else
				{
					printf("Arrays are identical\n");
				}
				break;
				
			case 25:
				sum=0;
				printf("Enter the number ");
				scanf("%d",&w);
				z=w;
				while(w!=0)
				{
					y=w%10;
					sum=sum+y*y*y;
					rem=rem*10+y;
					w=w/10;
				}
				if(z==rem)
				{
					printf("%d is palindrome.\n",z);
				}
				else
				{
					printf("%d is not palindrome.\n",z);
				}
				if(z==sum)
				{
					printf("%d is armstrong.",z);
				}
				else
				{
					printf("%d is not armstrong.",z);
				}
				break;
		}
	}while(temp!=0);
}

int prime(int n)
{
	int i,flag=0;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
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
