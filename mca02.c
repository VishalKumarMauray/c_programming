#include<stdio.h>
void main()
{
	int a,b,c,n;
	//float d;
	do
	{
		printf("\nenter   1 for addition\n\t2 for substraction\n\t3 for multiplication\n\t4 for division\n\t0 for exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				c=a+b;
				printf("%d + %d = %d",a,b,c);
				break;
			case 2:
				printf("enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				c=a-b;
				printf("%d - %d = %d",a,b,c);
				break;
			case 3:
				printf("enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				c=a*b;
				printf("%d * %d = %d",a,b,c);
				break;
			case 4:
				printf("enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				c=a/b;
				printf("quetient = %d ",c);
				c=a%b;
				printf("reminder = %d",c);
		}
	}while(n!=0);
} 
