#include<stdio.h>
struct student
{
	int m1,m2,m3,m4,m5,sum;
	float percent;
	char name[10];
};
void main()
{
	FILE *fp;
	int n,i,max=500;
	struct student s;
	fp=fopen("file","w");
	scanf("%d",&n);
	printf("name,marks of 5 subject out of 100");
	for(i=0;i<n;i++)
	{
	
	fscanf(stdin,"%s %d %d %d %d %d ",s.name,&s.m1,&s.m2,&s.m3,&s.m4,&s.m5);
	fprintf(fp,"%s %d %d %d %d %d ",s.name,s.m1,s.m2,s.m3,s.m4,s.m5);
}
	fclose(fp);
	fprintf(stdout,"\n\n");
	fp=fopen("file","r");
	printf("item_name  marks_obt  percent\n");
	for(i=0;i<n;i++)
	{
	
	fscanf(fp,"%s %d %d %d %d %d ",s.name,&s.m1,&s.m2,&s.m3,&s.m4,&s.m5);
	s.sum=s.m1+s.m2+s.m3+s.m4+s.m5;
	s.percent=s.sum/5;
	fprintf(stdout,"%s   %d   %.2f%%\n",s.name,s.sum,s.percent);
}
	fclose(fp);
}
