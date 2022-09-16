#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10]={1,0,0,0,0,0,0,0,0,0},n;
	printf("Enter the number ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		//a[i+1]=a[1+i]+a[i];
	}
}
