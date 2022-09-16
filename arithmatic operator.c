#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	float c;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("\n***Arithmetic operation***\n");
	printf("\nAddition operator\n");
	c=a+b;
	printf("%d + %d = %.2f\n",a,b,c);
	printf("\nSubstraction operator\n");
	c=a-b;
	printf("%d - %d = %.2f\n",a,b,c);
	printf("\nMultiplication operator\n");
	c=a*b;
	printf("%d * %d = %.2f\n",a,b,c);
	printf("\nDivision operator\n");
	c=a/b;
	printf("%d / %d = %.2f\n",a,b,c);
	printf("\nModulus operator\n");
	c=a%b;
	printf("%d %% %d = %.2f\n",a,b,c);
}
