//testing for 3 input in pre order
#include<stdio.h>
void main()
{
	int i,j=0,a[7],b[7],l[7],r[7],c,c1=0,c2=0;
	printf("enter the element of preorder ");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the element of inorder ");
	for(i=0;i<7;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<7;i++)
	{
		if(b[i]==a[0])
		{
			c=i;
		}
	}
	for(i=0;i<c;i++)
	{
		l[i]=b[i];
		c1++;
	}
	for(i=c+1;i<7;i++)
	{
		r[j]=b[i];
		c2++;
		j++;
	}
	printf("\nroot = %d",a[0]);
	printf("\nleft side of root\n");
	for(i=0;i<c1;i++)
	{
		printf("%d ",l[i]);
	}
	printf("\nright side of root\n");
	for(i=0;i<c2;i++)
	{
		printf("%d ",r[i]);
	}
}
