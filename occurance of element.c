#include<stdio.h>
void main()
{
	int flag=0,a[5],n=5,i,j=0,count=0;
	printf("enter 5 elements in array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	while(n>0)
	{
	for(i=0;i<5;i++)
	{
		switch(j)
		{
			case 1:
			if(a[1]==a[0])
			flag=1;
			break;
			
			case 2:
			if(a[2]==a[0] || a[2]==a[1])
			flag=1;
			break;
			
			case 3:
			if(a[3]==a[0] || a[3]==a[1] ||a[3]==a[2])
			flag=1;
			break;
			
			case 4:
			if(a[4]==a[0] || a[4]==a[1] || a[4]==a[2] || a[4]==a[3])
			flag=1;
			break;
			
		}
			
			if(a[j]==a[i])
			{
				count++;
			}	
		
}

	if(flag==0)
		printf("%d occurs %d times.\n",a[j],count);
	count=0;
	flag=0;
	j++;
	n--;
	}

}
