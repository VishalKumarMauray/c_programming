#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k=1,a=1;
	do
	{
		getch();
		printf("\nPress enter until you get desired pattern...\n");
		printf("0 for EXIT\n");
		printf("\n1 for   1\t\t2 for   1\n\t2  3\t\t\t0 1\n\t4  5  6\t\t\t1 0 1\n\t7  8  9  10\t\t0 1 0 1\n\t11 12 13 14 15\t\t1 0 1 0 1\n");
		printf("\n3 for   *\t\t4 for   1 2 3 4 5\n\t** \t\t\t1 2 3 4\n\t*** \t\t\t1 2 3\n\t**** \t\t\t1 2\n\t***** \t\t\t1\n");
		getch();
		printf("\n5 for   1\t\t6 for    *****\n\t2 2\t\t\t  ****\n\t3 3 3\t\t\t   ***\n\t4 4 4 4\t\t\t    **\n\t5 5 5 5 5\t\t     *\n");
		printf("\n7 for   SSSSS\t\t8 for    SSSSS\n\tSSSSS\t\t\t S   S\n\tSSSSS\t\t\t S   S\n\tSSSSS\t\t\t S   S\n\tSSSSS\t\t\t SSSSS\n");
		getch();
		printf("\n9 for   SSSSS\t\t10 for      *\n\tSSSSS\t\t\t   ***\n\tSSOSS\t\t\t  *****\n\tSSSSS\t\t\t *******\n\tSSSSS\t\t\t  *****\n\t\t\t\t   ***\n\t\t\t\t    *\n");
		printf("\n11 for  *****\t\t12 for       *\n\t****\t\t\t    **\n\t***\t\t\t   ***\n\t**\t\t\t  ****\n\t*\t\t\t *****\n");
		getch();
		printf("\n13 for  1\t\t14 for       *\n\t1 2\t\t\t    ***\n\t1 2 3\t\t\t   *****\n\t1 2 3 4\t\t\t  *******\n\t1 2 3 4 5\t\t *********\n");
		printf("\n15 for  *********\t16 for       *****\n\t *******\t\t    *****\n\t  *****\t\t\t   *****\n\t   ***\t\t\t  *****\n\t    *\t\t\t *****\n");
		getch();
		printf("\n17 for  *****\t\t18 for   *****\n\t *****\t\t\t   ****\n\t  *****\t\t\t     ***\n\t   *****\t\t       **\n\t    *****\t\t         *\n");
		printf("\n19 for  *\t\t20 for       *\n\t**\t\t\t    **\n\t***\t\t\t   ***\n\t****\t\t\t  ****\n\t*****\t\t\t *****\n\t****\t\t\t  ****\n\t***\t\t\t   ***\n\t**\t\t\t    **\n\t*\t\t\t     *\n");
		getch();
		printf("\n21 for  1\t\t22 for   1\n\t10\t\t\t 00\n\t101\t\t\t 111\n\t1010\t\t\t 0000\n\t10101\t\t\t 11111\n");
		printf("\n23 for      1\t\t24 for   101010101\n\t   101\t\t\t  1010101\n\t  10101\t\t\t   10101\n\t 1010101\t\t    101\n\t101010101\t\t     1\n");
		getch();
		printf("\n25 for  **********\t26 for   11011\n\t****  ****\t\t 11011\n\t***    ***\t\t 00000\n\t**      **\t\t 11011\n\t*        *\t\t 11011\n\t*        *\n\t**      **\n\t***    ***\n\t****  ****\n\t**********\n");
		printf("\n27 for  0***0\t\t28 for   12345\n\t*0*0*\t\t\t 23455\n\t**0**\t\t\t 34555\n\t*0*0*\t\t\t 45555\n\t0***0\t\t\t 55555\n");
		getch();
		printf("\n29 for  55555\t\t30 for   12345\n\t54444\t\t\t 23451\n\t54333\t\t\t 34512\n\t54322\t\t\t 45123\n\t54321\t\t\t 51234\n");
		printf("\n31 for  12345\t\t32 for       1\n\t21234\t\t\t    202\n\t32123\t\t\t   30003\n\t43212\t\t\t  4000004\n\t54321\t\t\t 500000005\n");
		getch();
		//printf("\n33 for  \t\t34 for   \n\t \t\t\t \n\t \t\t\t \n\t \t\t \n\t \t\t \n");
		
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				for(i=0;i<5;i++)
				{
					for(j=0;j<=i;j++)
					{
						printf("%d ",a);
						a++;
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 2:
				for(i=0;i<5;i++)
				{
				for(j=0;j<=i;j++)
				{
					if((i+j)%2==0)
					{
						printf("1 ");
					}
					else
					{
						printf("0 ");
					}
				}
				printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 3:
				for(i=0;i<5;i++)
				{
					for(j=0;j<=i;j++)
					{
						printf("*");
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 4:
				for(i=0;i<5;i++)
				{
					for(j=5;j>i;j--)
					{
						printf("%d ",k);
						k++;
					}
					k=1;
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 5:
				for(i=1;i<6;i++)
				{
					for(j=1;j<=i;j++)
					{
						printf("%d ",i);
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 6:
				for(i=1;i<6;i++)
				{
					for(j=1;j<i;j++)
					{
						printf(" ");
					}
					for(j=6;j>i;j--)
					{
						printf("*");
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 7:
				for(i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
					{
						printf("S");
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 8:
				for(i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
					{
						if(i==0 || i==4)
						{
							printf("S");
						}
						else
						{
							printf("S   S");
							break;
						}
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 9:
				for(i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
					{
						if(i==2)
						{
							if(j==2)
							{
								printf("O");
							}
							else
							{
								printf("S");
							}
						}
						else
						{
							printf("S");
						}
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 10:
				for(i=0;i<4;i++)
				{
					for(j=4;j>i;j--)
					{
						printf(" ");
					}
					for(j=0;j<i;j++)
					{
						printf("*");
					}
					for(j=0;j<=i;j++)
					{
					printf("*");
					}
					printf("\n");
				}
				for(i=0;i<4;i++)
				{
					for(j=-1;j<=i;j++)
					{
						printf(" ");
					}
					for(j=2;j>i;j--)
					{
						printf("*");
					}
					for(j=3;j>i;j--)
					{
						printf("*");
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 11:
				printf("\n");
				for(i=0;i<5;i++)
				{
					for(j=5;j>i;j--)
					{
						printf("*");
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
				
			case 12:
				printf("\n");
				for(i=0;i<6;i++)
				{
					for(j=6;j>i;j--)
					{
						printf(" ");
					}
					for(j=0;j<i;j++)
					{
						printf("*");
					}
					printf("\n");
				}
				getch();
				break;
				
			case 13:
				printf("\n");
				for(i=1;i<6;i++)
				{
					for(j=1;j<=i;j++)
					{
						printf("%d ",j);
					}
					printf("\n");
				}
				getch();
				break;
				
			case 14:
				printf("\n");
				for(i=0;i<5;i++)
				{
					for(j=5;j>i;j--)
					{
						printf(" ");
					}
					for(j=0;j<i;j++)
					{
						printf("*");
					}
					for(j=0;j<=i;j++)
					{
					printf("*");
					}
					printf("\n");
				}
				getch();
				break;
				
			case 15:
				printf("\n");
				for(i=5;i>0;i--)
				{
					for(j=5;j>i;j--)
					{
						printf(" ");
					}
					for(j=0;j<i;j++)
					{
						printf("*");
					}
					for(j=1;j<i;j++)
					{
					printf("*");
					}
					printf("\n");
				}
				getch();
				break;
				
			case 16:
				printf("\n");
				for(i=5;i>0;i--)
				{
					for(j=0;j<i;j++)
					{
						printf(" ");
					}
					for(j=5;j>i;j--)
					{
						printf("*");
					}
					for(j=0;j<=i;j++)
					{
					printf("*");
					}
					printf("\n");
				}
				getch();
				break;
		
			case 17:
				printf("\n");
				for(i=5;i>0;i--)
				{
					for(j=5;j>i;j--)
					{
						printf(" ");
					}
					for(j=5;j>i;j--)
					{
						printf("*");
					}
					for(j=0;j<=i;j++)
					{
					printf("*");
					}
					printf("\n");
				}
				getch();
				break;
				
			case 18:
				printf("\n");
				for(i=1;i<6;i++)
				{
					for(j=1;j<i;j++)
					{
						printf("  ");
					}
					for(j=6;j>i;j--)
					{
						printf("*");
					}
					printf("\n");
				}
				
				getch();
				break;
				
			case 19:
				printf("\n");
				for(i=0;i<5;i++)
				{
					for(j=0;j<=i;j++)
					{
						printf("*");
					}
					printf("\n");
				}
				for(i=0;i<4;i++)
				{
					for(j=4;j>i;j--)
					{
						printf("*");
					}
					printf("\n");
				}
				printf("\n");
				
				getch();
				break;
				
			case 20:
				printf("\n");
				for(i=0;i<5;i++)
				{
					for(j=5;j>i;j--)
					{
						printf(" ");
					}
					for(j=0;j<i;j++)
					{
						printf("*");
					}
					printf("\n");
				}
				for(i=1;i<6;i++)
				{
					for(j=1;j<i;j++)
					{
						printf(" ");
					}
					for(j=6;j>i;j--)
					{
						printf("*");
					}
					printf("\n");
				}
				
				getch();
				break;
			
			case 21:
				printf("\n");
				for(i=1;i<6;i++)
				{
					for(j=1;j<=i;j++)
					{
						if(j%2==0)
						{
							printf("0");	
						}
						else
						{
							printf("1");
						}
					}
					printf("\n");
				}
				
				getch();
				break;
			
			case 22:
				printf("\n");
				for(i=1;i<6;i++)
				{
					for(j=1;j<=i;j++)
					{
						if(i%2==0)
						{
							printf("0");	
						}
						else
						{
							printf("1");
						}
					}
					printf("\n");
				}
				
				getch();
				break;
			
			case 23:
				printf("\n");
				for(i=1;i<10;i++)
				{
					for(k=4;k>=a;k--)
						{
							printf(" ");
						}
						a++;
					for(j=1;j<=i;j++)
					{
						if(j%2==0)
						{
							printf("0");
						}
						else
						{
							printf("1");
						}
					}
					i++;
					printf("\n");
				}
				getch();
				break;
				
			case 24:
				printf("\n");
				for(i=9;i>=1;i--)
				{
					for(k=1;k<=a;k++)
						{
							printf(" ");
						}
						a++;
					for(j=1;j<=i;j++)
					{
						if(j%2==0)
						{
							printf("0");
						}
						else
						{
							printf("1");
						}
					}
					i--;
					printf("\n");
				}
				getch();
				break;
			
			case 25:
				printf("\n");
				for(i=0;i<5;i++)
				{
					for(j=5;j>i;j--)
					{
						printf("*");
					}
					for(j=0;j<i;j++)
					{
						printf(" ");
					}
					for(j=0;j<i;j++)
					{
						printf(" ");
					}
					for(j=5;j>i;j--)
					{
						printf("*");
					}
					printf("\n");
				}
				for(i=0;i<5;i++)
				{
					for(j=0;j<=i;j++)
					{
						printf("*");
					}
					for(j=4;j>i;j--)
					{
						printf(" ");
					}
					for(j=4;j>i;j--)
					{
						printf(" ");
					}
					for(j=0;j<=i;j++)
					{
						printf("*");
					}
					printf("\n");
				}
				printf("\n");
				getch();
				break;
			
			case 26:
				printf("\n");
				for(i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
					{
						if(i==2 || j==2)
						{
						printf("0");
						}
						else
						{
						printf("1");
						}
					}
					printf("\n");
				}
				getch();
				break;
				
			case 27:
				printf("\n");
				for(i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
					{
						if(i+j==4 || i==j)
						{
						printf("0");
						}
						else
						{
						printf("*");
						}
					}
					printf("\n");
				}
				getch();
				break;
				
			case 28:
				printf("\n");
				k=1;
				for(i=1;i<6;i++)
				{
					for(j=k;j<=5;j++)
					{
					printf("%d",j);
					}
					k++;
					for(j=1;j<i;j++)
					{
						printf("5");
					}
					printf("\n");
				}
				getch();
				break;
				
			case 29:
				printf("\n");
				for(i=5;i>0;i--)
				{
					for(j=5;j>i;j--)
					{
						printf("%d",j);
					}
					for(j=0;j<i;j++)
					{
						printf("%d",i);
					}
					printf("\n");
				}
				getch();
				break;
				
			case 30:
				printf("\n");
				a=0;
				for(i=5;i>0;i--)
				{
					k=a+1;
					for(j=0;j<i;j++)
					{
						printf("%d",k);
					k++;
					}
					k=1;
					for(j=5;j>i;j--)
					{
						printf("%d",k);
						k++;
					}
					a++;	
					printf("\n");
				}
				getch();
				break;
				
			case 31:
				printf("\n");
				k=0;
				a=1;
				for(i=5;i>0;i--)
				{
					k=a;
					for(j=5;j>i;j--)
					{
						printf("%d",k);
						k--;
					}
					
					for(j=1;j<=i;j++)
					{
						printf("%d",j);
				
					}
					
					a++;	
					printf("\n");
				}
				getch();
				break;
				
			case 32:
				printf("\n");
				for(i=1;i<6;i++)
				{
					for(j=4;j>=i;j--)
					{
						printf(" ");
					}
					for(j=1;j<=i;j++)
					{
						printf("%d",i);
						break;
					}
					for(j=1;j<i;j++)
					{
						printf("0");
					}
					for(j=3;j<=i;j++)
					{
					printf("0");
					}
					for(j=2;j<=i;j++)
					{
						printf("%d",i);
						break;
					}
					printf("\n");
				}
				getch();
				break;
				
			/*case 33:
				printf("\n");
				
				getch();
				break;*/
		}
	}while(n!=0);
}
