#include <stdio.h>
void main()
{
   int n;
   float s=0.0,i;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i<=n)
       {
     		s=s+1/i;
       }
	}
    printf("Sum of Series upto %d terms : %f \n",n,s);
}  

