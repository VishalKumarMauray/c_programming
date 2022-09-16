#include<stdio.h>
void main()
{
	int n,prev=0,cur=1,sum;
	printf("enter the number ");
	scanf("%d",&n);
	printf("1 ");
	do
	{
		sum=prev+cur;
		prev=cur;
		cur=sum;
		n--;
		printf("%d ",sum);
	}while(n>0);
}
