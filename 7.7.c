#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,n,lar=-9999,sma=9999;
	printf("Enter the first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			if(sma>=a[i][j])
			{
				sma=a[i][j];
			}
			if(lar<=a[i][j])
			{
				lar=a[i][j];
			}
		}
	}
	printf("smallest element in matrix %d\nlargest element in matrix %d\n",sma,lar);
	printf("Enter the secound matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
			if(sma>=b[i][j])
			{
				sma=b[i][j];
			}
			if(lar<=b[i][j])
			{
				lar=b[i][j];
			}
		}
	}
	printf("smallest element in matrix %d\nlargest element in matrix %d\n",sma,lar);
	do
	{
		printf("\n  Enter 1 for addition\n\t2 for substraction\n\t3 for multiplication\n\t4 for exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			printf("ADDITION\n");
			for(i=0;i<3;i++)
			{		
				for(j=0;j<3;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
					printf("%d ",c[i][j]);
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
					c[i][j]=a[i][j]-b[i][j];
					printf("%d ",c[i][j]);
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
						c[i][j]=c[i][j]+a[i][k]*b[k][j];
					}
					printf("%d ",c[i][j]);
				}
				printf("\n");
			}
			break; 
		}
	}while(n>0 && n<4);
}
