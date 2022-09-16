#include<stdio.h>
#include<conio.h>
#include<time.h>

void main()
{
	char name[10],desc[20];
	int i,qty,qtysum=0,n=1,sum1;
	long int mob;
	float price,amt,sum=0.0;
	printf("\t\tMauray_DEEP Mart\n\n");
	printf("\tSanjay Nagar near tri-murti market\n");
	printf("\t     Bareilly(Uttar Pradesh)\n");
	printf("\t\t  Phone: 892851561\n");
	for(i=0;i<50;i++)
	{
		printf("-");
	}
	printf("\nDate: "__DATE__);
	printf("\t\tname: ");
	scanf("%s",&name);
	printf("Time: "__TIME__);
	printf("\t\t\tmobile: ");
	scanf("%ld",&mob);
	for(i=0;i<50;i++)
	{
		printf("-");
	}
	printf("\n  Description     quantity     rate    Amount\n");
	for(i=0;i<50;i++)
	{
		printf("-");
	}
	printf("\n");
	do
	{
		scanf("%s%d%f",&desc,&qty,&price);
		amt=qty*price;
		printf("%.2f",amt);
		sum=sum+amt;
		qtysum=qtysum+qty;
		getch();
		scanf("%d",&n);
	}while(n==1);
	for(i=0;i<50;i++)
	{
		printf("-");
	}
	printf("\nTotal qty=%d\t\t\tG.Total=%.2f\n",qtysum,sum);
	for(i=0;i<50;i++)
	{
		printf("-");
	}
	printf("\n");
	sum1=sum;
	word(sum1);
	printf("\n");
	for(i=0;i<50;i++)
	{
		printf("-");
	}
	printf("\nTerms and Condition:-\n");
	printf("Goods once sold not be taken back & no cash refund.\n");
	printf("Goods may be exchange with in week only on the\n");
	printf("essentiation of Cash Memo(timing:3pm to 4pm).\n");
	printf("no Gurantee for Colours & Pillings.\n\n");
	printf("\t~Thanks~~Visit Again~");
}

int word(int a)
{
	int count=0,b;
	b=a;
	do
	{
		b=b/10;
		count++;
	}while(b>0);
	
	switch(count)
	{
		case 5:
			b=a/10000;
			switch(b)
			{
				case 0:
					printf("");
					break;
					
				case 1:
					b=a/1000;
					switch(b)
					{
						case 10:
							printf("Ten ");
							break;
					
						case 11:
							printf("Eleven ");
							break;
					
						case 12:
							printf("Twelve ");
							break;
				
						case 13:
							printf("Thirteen ");
							break;
				
						case 14:
							printf("Fourteen ");
							break;
					
						case 15:
							printf("Fifteen ");
							break;
				
						case 16:
							printf("Sixteen ");
							break;
				
						case 17:
							printf("Seventeen ");
							break;
				
						case 18:
							printf("Eighteen ");
							break;
				
						case 19:
							printf("Nineteen ");
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
			b=a/10000;
			if(b!=1)
			{
				a=a%10000;
				b=a/1000;
				
				switch(b)
				{
					case 0:
						printf("");
						break;
						
					case 1:
						printf("one ");
						break;
					
					case 2:
						printf("two ");
						break;
					
					case 3:
						printf("Three ");
						break;
					
					case 4:
						printf("Four ");
						break;
					
					case 5:
						printf("Five ");
						break;
					
					case 6:
						printf("Six ");
						break;
					
					case 7:
						printf("Seven ");
						break;
					
					case 8:
						printf("Eight ");
						break;
					
					case 9:
						printf("Nine ");
						break;
					
				}
				
			}
			a=a%1000;
			b=a/100;
			a=a%100;
			printf("thousand ");
			switch(b)
			{
				case 0:
					printf("");
					break;
					
				case 1:
					printf("One hundred ");
					break;
					
				case 2:
					printf("Two hundred ");
					break;
					
				case 3:
					printf("Three hundred ");
					break;
					
				case 4:
					printf("Four hundred ");
					break;
					
				case 5:
					printf("Five hundred ");
					break;
					
				case 6:
					printf("Six hundred ");
					break;
					
				case 7:
					printf("Seven hundred ");
					break;
					
				case 8:
					printf("Eight hundred ");
					break;
					
				case 9:
					printf("Nine hundred ");
					break;
					
			}
			b=a/10;
			
			switch(b)
			{
				case 0:
					printf("");
					break;
					
				case 1:
					b=a;
					switch(b)
					{
						case 10:
							printf("Ten ");
							break;
					
						case 11:
							printf("Eleven ");
							break;
					
						case 12:
							printf("Twelve ");
							break;
				
						case 13:
							printf("Thirteen ");
							break;
				
						case 14:
							printf("Fourteen ");
							break;
					
						case 15:
							printf("Fifteen ");
							break;
				
						case 16:
							printf("Sixteen ");
							break;
				
						case 17:
							printf("Seventeen ");
							break;
				
						case 18:
							printf("Eighteen ");
							break;
				
						case 19:
							printf("Nineteen ");
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
			b=a/10;
			if(b!=1)
			{
				b=a%10;
				switch(b)
				{
					case 0:
						printf("");
						break;
						
					case 1:
						printf("one ");
						break;
					
					case 2:
						printf("two ");
						break;
					
					case 3:
						printf("Three ");
						break;
					
					case 4:
						printf("Four ");
						break;
					
					case 5:
						printf("Five ");
						break;
					
					case 6:
						printf("Six ");
						break;
					
					case 7:
						printf("Seven ");
						break;
					
					case 8:
						printf("Eight ");
						break;
					
					case 9:
						printf("Nine ");
						break;
					
				}
			
			}
			printf("rupees only");
			break;
		
			
		case 4:
			b=a/1000;
				
			switch(b)
			{
				case 0:
					printf("");
					break;
						
				case 1:
					printf("one ");
					break;
					
				case 2:
					printf("two ");
					break;
					
				case 3:
					printf("Three ");
					break;
					
				case 4:
					printf("Four ");
					break;
					
				case 5:
					printf("Five ");
					break;
					
				case 6:
					printf("Six ");
					break;
					
				case 7:
					printf("Seven ");
					break;
					
				case 8:
					printf("Eight ");
					break;
					
				case 9:
					printf("Nine ");
					break;
					
			}
				
			
			a=a%1000;
			b=a/100;
			a=a%100;
			printf("thousand ");
			switch(b)
			{
				case 0:
					printf("");
					break;
						
				case 1:
					printf("One hundred ");
					break;
					
				case 2:
					printf("Two hundred ");
					break;
					
				case 3:
					printf("Three hundred ");
					break;
					
				case 4:
					printf("Four hundred ");
					break;
					
				case 5:
					printf("Five hundred ");
					break;
					
				case 6:
					printf("Six hundred ");
					break;
					
				case 7:
					printf("Seven hundred ");
					break;
					
				case 8:
					printf("Eight hundred ");
					break;
					
				case 9:
					printf("Nine hundred ");
					break;
					
			}
			b=a/10;
			
			switch(b)
			{
				case 0:
					printf("");
					break;
					
				case 1:
					b=a;
					switch(b)
					{
						case 10:
							printf("Ten ");
							break;
					
						case 11:
							printf("Eleven ");
							break;
					
						case 12:
							printf("Twelve ");
							break;
				
						case 13:
							printf("Thirteen ");
							break;
				
						case 14:
							printf("Fourteen ");
							break;
					
						case 15:
							printf("Fifteen ");
							break;
				
						case 16:
							printf("Sixteen ");
							break;
				
						case 17:
							printf("Seventeen ");
							break;
				
						case 18:
							printf("Eighteen ");
							break;
				
						case 19:
							printf("Nineteen ");
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
			b=a/10;
			if(b!=1)
			{
				b=a%10;
				switch(b)
				{
					case 0:
						printf("");
						break;
						
					case 1:
						printf("one ");
						break;
					
					case 2:
						printf("two ");
						break;
					
					case 3:
						printf("Three ");
						break;
					
					case 4:
						printf("Four ");
						break;
					
					case 5:
						printf("Five ");
						break;
					
					case 6:
						printf("Six ");
						break;
					
					case 7:
						printf("Seven ");
						break;
					
					case 8:
						printf("Eight ");
						break;
					
					case 9:
						printf("Nine ");
						break;
					
				}
			
			}
			printf("rupees only");
			break;
			
			
		case 3:
			
			b=a/100;
			a=a%100;
			switch(b)
			{
				case 0:
					printf("");
					break;
						
				case 1:
					printf("One hundred ");
					break;
					
				case 2:
					printf("Two hundred ");
					break;
				
				case 3:
					printf("Three hundred ");
					break;
					
				case 4:
					printf("Four hundred ");
					break;
					
				case 5:
					printf("Five hundred ");
					break;
					
				case 6:
					printf("Six hundred ");
					break;
					
				case 7:
					printf("Seven hundred ");
					break;
					
				case 8:
					printf("Eight hundred ");
					break;
					
				case 9:
					printf("Nine hundred ");
					break;
					
			}
			b=a/10;
			
			switch(b)
			{
				case 0:
					printf("");
					break;
					
				case 1:
					b=a;
					switch(b)
					{
						case 10:
							printf("Ten ");
							break;
					
						case 11:
							printf("Eleven ");
							break;
					
						case 12:
							printf("Twelve ");
							break;
				
						case 13:
							printf("Thirteen ");
							break;
				
						case 14:
							printf("Fourteen ");
							break;
					
						case 15:
							printf("Fifteen ");
							break;
				
						case 16:
							printf("Sixteen ");
							break;
				
						case 17:
							printf("Seventeen ");
							break;
				
						case 18:
							printf("Eighteen ");
							break;
				
						case 19:
							printf("Nineteen ");
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
			b=a/10;
			if(b!=1)
			{
				b=a%10;
				switch(b)
				{
					case 0:
						printf("");
						break;
						
					case 1:
						printf("one ");
						break;
					
					case 2:
						printf("two ");
						break;
					
					case 3:
						printf("Three ");
						break;
					
					case 4:
						printf("Four ");
						break;
					
					case 5:
						printf("Five ");
						break;
					
					case 6:
						printf("Six ");
						break;
					
					case 7:
						printf("Seven ");
						break;
					
					case 8:
						printf("Eight ");
						break;
					
					case 9:
						printf("Nine ");
						break;
					
				}
			
			}
			printf("rupees only");
			break;
			
		case 2:
			b=a/10;
			
			switch(b)
			{
				case 0:
					printf("");
					break;
					
				case 1:
					b=a;
					switch(b)
					{
						case 10:
							printf("Ten ");
							break;
					
						case 11:
							printf("Eleven ");
							break;
					
						case 12:
							printf("Twelve ");
							break;
				
						case 13:
							printf("Thirteen ");
							break;
				
						case 14:
							printf("Fourteen ");
							break;
					
						case 15:
							printf("Fifteen ");
							break;
				
						case 16:
							printf("Sixteen ");
							break;
				
						case 17:
							printf("Seventeen ");
							break;
				
						case 18:
							printf("Eighteen ");
							break;
				
						case 19:
							printf("Nineteen ");
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
			b=a/10;
			if(b!=1)
			{
				b=a%10;
				switch(b)
				{
					case 0:
						printf("");
						break;
						
					case 1:
						printf("one ");
						break;
					
					case 2:
						printf("two ");
						break;
					
					case 3:
						printf("Three ");
						break;
					
					case 4:
						printf("Four ");
						break;
					
					case 5:
						printf("Five ");
						break;
					
					case 6:
						printf("Six ");
						break;
					
					case 7:
						printf("Seven ");
						break;
					
					case 8:
						printf("Eight ");
						break;
					
					case 9:
						printf("Nine ");
						break;
					
				}
			
			}
			printf("rupees only");
			
			break;
			
		case 1:
			b=a/10;
				switch(b)
				{
					case 0:
						printf("");
						break;
						
					case 1:
						printf("one ");
						break;
					
					case 2:
						printf("two ");
						break;
					
					case 3:
						printf("Three ");
						break;
					
					case 4:
						printf("Four ");
						break;
					
					case 5:
						printf("Five ");
						break;
					
					case 6:
						printf("Six ");
						break;
					
					case 7:
						printf("Seven ");
						break;
					
					case 8:
						printf("Eight ");
						break;
					
					case 9:
						printf("Nine ");
						break;
					
				}
			printf("rupees only");
			break;
		}
}	
