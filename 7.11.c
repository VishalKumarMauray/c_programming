#include<stdio.h>
void main()
{
	int i,count=-1,m,c1=0;
	char a[20],n,b[10];
	printf("enter the character you want to search ");
	scanf("%c",&n);
	printf("\nenter the number character in your word you want to search ");
	scanf("%d",&m);
	printf("\nenter the word you want to search ");
	for(i=0;i<m;i++)
	{
		scanf("%c",&b[i]);
	}
	printf("\nMAX=20 words\nenter the string\n");
	for(i=0;i<20;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]!=' ')
		{
			count++;
		}
		if(a[i]==n)
		{
			c1++;
		}
	}
	printf("\ntotal character in the string %d\n%c in the string %d\n\nString without your search character",count,n,c1);
	for(i=0;i<20;i++)
	{
		if(a[i]==n)
		{
			printf("");
		}
		else
		{
			printf("%c",a[i]);
		}
	}
}
