#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,row,col;
	printf("enter the number of rows in matrix ");
	scanf("%d",&row);
	printf("enter the number of columns in matrix ");
	scanf("%d",&col);
	printf("enter the first matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the secound matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of both matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
