#include<stdio.h>
#include<conio.h>
void main()
{
	int b[3]={99,99,99},n,a[20],i,hit=0,z=3,j=3;
	float x,y;
	printf("***INSTRUCTION***\nFIRST IN FIRST OUT program\nMax elements are 20\nNo of frames are 3 \n\nEnter how many numbers you want to insert ");
	scanf("%d",&n);
	printf("enter the elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%d\n",a[i]);
			b[i]=a[i];
		}
		else if(i==1)
		{
			if(a[i]==b[0] || a[i]==b[1] || a[i]==b[2])
			{
				hit++;
			}
			printf("%d %d\n",a[i-1],a[i]);
			b[i]=a[i];
		}
		else if(i==2)
		{
			if(a[i]==b[0] || a[i]==b[1] || a[i]==b[2])
			{
				hit++;
			}
			printf("%d %d %d\n",a[i-2],a[i-1],a[i]);
			b[i]=a[i];
		}
		else
		{
			if(a[i]==b[0] || a[i]==b[1] || a[i]==b[2])
			{
				hit++;
				printf("%d %d %d\n",b[0],b[1],b[2]);
			}
			else
			{
				if(j==z+0)
				{
					b[0]=a[i];
					printf("%d %d %d\n",b[0],b[1],b[2]);
					j++;
				}
				else if(j==z+1)
				{
					b[1]=a[i];
					printf("%d %d %d\n",b[0],b[1],b[2]);
					j++;
				}
				else if(j==z+2)
				{
					b[2]=a[i];
					printf("%d %d %d\n",b[0],b[1],b[2]);
					z=z+3;
					j++;
				}
			}
					
		}
	}
	printf("\nNo. of hits=%d\nPage fault=%d",hit,n-hit);
	x=hit;
	y=n;
	printf("\nHit ratio=%2.f",x/y);
}
