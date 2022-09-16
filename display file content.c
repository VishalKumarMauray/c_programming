#include<stdio.h>
void main()
{
	FILE *f1;
	char ch;
	f1=fopen("file.txt","r");
	do
	{
		ch=fgetc(f1);
		putchar(ch);
	}while(ch!=EOF);
	fclose(f1);
}
