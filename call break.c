#include<stdio.h>
#include<conio.h>

int border()
{
	int n=0;
	printf("\n");
	do{
		printf("---");
		n++;
	}while(n<20);
	n=0;
}

void main()
{
	char name1[15],name2[15],name3[15],name4[15];
	float temp=0,sa=0,sb=0,sc=0,sd=0,a[13],b[13],c[13],d[13],arr[4];
	int i,z,j,user;
	
	printf("enter number of turns\n");
	scanf("%d",&z);
	printf("Enter the number of users\n");
	scanf("%d",&user);
	switch(user)
	{
		case 4:
			printf("please enter the name of the user\n");
			scanf("%s%s%s%s",&name1,&name2,&name3,&name4);
			for(i=0;i<z;i++)
			{
				scanf("%f %f %f %f",&a[i],&b[i],&c[i],&d[i]);
				sa=sa+a[i];
				sb=sb+b[i];
				sc=sc+c[i];
				sd=sd+d[i];
			}
			border();
			printf("\n  %s  %s  %s  %s",name1,name2,name3,name4);
			border();
			for(i=0;i<z;i++)
			{
				printf("\n  %0.2f\t  %0.2f\t  %0.2f\t  %0.2f",a[i],b[i],c[i],d[i]);
			}
			border();
			printf("\n  %0.2f\t  %0.2f\t  %0.2f\t  %0.2f",sa,sb,sc,sd);
			border();
			printf("\n");
			if(sa>sb && sa>sc && sa>sd)
			{
				printf("%s is winner",name1);
			}
			else if(sb>sa && sb>sc && sb>sd)
			{
				printf("%s is winner",name2);
			}
			else if(sc>sb && sc>sa && sc>sd)
			{
				printf("%s is winner",name3);
			}
			else if(sd>sa && sd>sb && sd>sc)
			{
				printf("%s is winner",name4);
			}
			
			break;
	
			case 3:
			printf("please enter the name of the user\n");
			scanf("%s%s%s",&name1,&name2,&name3);
			for(i=0;i<z;i++)
			{
				scanf("%f %f %f",&a[i],&b[i],&c[i]);
				sa=sa+a[i];
				sb=sb+b[i];
				sc=sc+c[i];
			}
			border();
			printf("\n  %s  %s  %s ",name1,name2,name3);
			border();
			for(i=0;i<z;i++)
			{
				printf("\n  %0.2f\t  %0.2f\t  %0.2f\t",a[i],b[i],c[i]);
			}
			border();
			printf("\n  %0.2f\t  %0.2f\t  %0.2f\t ",sa,sb,sc);
			border();
			printf("\n");
			if(sa>sb && sa>sc )
			{
				printf("%s is winner",name1);
			}
			else if(sb>sa && sb>sc )
			{
				printf("%s is winner",name2);
			}
			else if(sc>sb && sc>sa )
			{
				printf("%s is winner",name3);
			}
		
			
			break;
			
			default :
				printf("you are entering a wrong value of user...\nThis game is made for playing with three and four players the value you entered in the game is not valid...\nPlease enter a valid value...\nThank you...\n#VENOM");
	
	}
	
}	
