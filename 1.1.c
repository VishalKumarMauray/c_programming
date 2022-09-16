#include<stdio.h>
void main()
{
	char name[10],street[30],city[10];
	int door[5],pincode[6];
	printf("enter name ");
	gets(name);
	printf("enter street ");
	gets(street);
	printf("enter city ");
	gets(city);
	printf("enter door no. ");
	scanf("%d",&door[5]);
	printf("enter pincode ");
	scanf("%d",&pincode[6]);
	printf("%s\n%d,%s\n%s,%d",name,door[5],street,city,pincode[6]);
	getch();
}
