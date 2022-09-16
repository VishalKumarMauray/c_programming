#include<Stdio.h>
void main()
{
	int n;
	int a,b;
	printf("enter the number ");
	scanf("%d",&n);
    a=n;
	b=a/100000;
	switch(b)
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
	b=a/10000;
	b=b%10;
	switch(b)
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
	b=a/1000;
	b=b%10;
	switch(b)
	{
		case 0:
			printf(" ");
			break;
			
		case 1:
			b=a/100;
			b=b%10;
			switch(b)
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
	b=a/1000;
	b=b%10;
	if(b!=1)
	{
		b=a/100;
		b=b%10;
		switch(b)
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
	b=a/10;
	b=b%10;
	switch(b)
	{
		case 0:
			printf(" Paise");
			break;
			
		case 1:
			b=a/1;
			b=b%10;
			switch(b)
			{
				case 0:
					printf("Ten Paise");
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
	
	b=a/1;
	b=b%10;
	switch(b)
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
}
