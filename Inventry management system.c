#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

int mboxbrdrclr,mboxbgclr,mboxfgclr;
int menutextbgclr,menutextfgclr,appframeclr;
int sec1_symb,sec1_fgclr,sec1_bgclr;
int sec2_symb,sec2_fgclr,sec2_bgclr;
int fedit;
int animcounter;

static struct struct_stock
{
	char itemcode[8];
	char itemname[50];
	float itemrate;
	float itemqty;
	int minqty;
}inv_stock;

struct struct_bill
{
	char itemcode[8];
	char itemname[50];
	float itemrate;
	float itemqty;
	float itemtot;
}item_bill[100];

char password[8];
const long int stocksize=sizeof(inv_stock);
float tot_investment;
int numitems;
int button,column,rows;

FILE *dbf;

int main(void)
{
	float issued_qty;
	char userchoice,code[8];
	int flag,i,itemsold;
	float getinvestmentinfo(void);
	FILE *ft;
	int result;
	getconfiguration();
	
	dbf=fopen("F:\\college work\\MCA\\c programming\\database\\InvManSys.dat","r+");
	if(dbf==NULL)
	{
		clrscr();
		printf("\nDatabase does not exists.\nPress enter key to create it.To exit, press any other key.\n");
		fflush(stdin);
		if(getch()==13)
		{
			dbf=fopen("F:\\college work\\MCA\\c programming\\database\\InvManSys.dat","w+");
			printf("\nThe database for the application has been created.\nYou must restart the application.\nPress any key to continue.\n");
			fflush(stdin);
			getch();
			exit(0);
		}	
		else
		{
			exit(0);
		}
	}	
	if(initmouse()==0)
		messagebox(10,30,"Mouse could not be loaded.","Error",' ',mboxbrdrclr,mboxbgclr,mboxfgclr,0);
		showmouseptr();
		_setcursortype(_NOCURSOR);
		
	while(1)
	{
		clrscr();
		fedit=FALSE;
		ShowMenu();
		numitems=0;
		rewind(dbf);
		
		while(fread(&inv_stock,stocksize,1,dbf)==1)
			++numitems;
		textcolor(menutextfgclr);
		textbackground(menutextbgclr);
		gotopos(23,1);
		cprintf("Total items in stock: %d",numitems);
		textcolor(BLUE);
		textbackground(BROWN);
		fflush(stdin);
		userchoice=getUserResponse();
		switch(userchoice)
		{
			case '0':
				BackupDatabase();
				flushall();
				fclose(dbf);
				fcloseall();
				print2screen(12,40,"Thanks for using the application.\nMauray_DEEP",BROWN,BLUE,0);
				sleep(1);
				setdefaultmode();
				exit(0);
				
			case '1':
				if(getdata()==1)
				{
					fseek(dbf,0,SEEK_END);
					fwrite(&inv_stock,stocksize,1,dbf);
					print2screen(13,33."The item has been sucessfully added.",BROWN,BLUE,0);
					getch();
				}
				break;
				
			case '2':
				print2screen(2,33,"Enter item code>",BROWN,BLUE,0);
				gotopos(2,54);
				flush(stdin);
				scanf("%s",&code);
				fedit=TRUE;
				if(checkId(code)==0)
				{
					if(messagebox(0,33,"Press enter key to edit the item.","confirm",'',mboxbrdrclr,mboxbgclr,mboxfgclr,0)!=13)
					{
						messagebox(10,33,"The item information could not be modified.Please try again.","Edit",'',,mboxbrdrclr,mboxbgclr,mboxfgclr,0);
						fedit=FALSE;
						break;
					}
					fedit=TRUE;
					getdata();
					fflush(stdin);
					fseek(dbf,-stocksize,SEEK_CUR);
					fwrite(&inv_stock,stocksize,1,dbf);
				}
				else
					messagebox(10,33,"The item is not available in the database.","No records found",'',,mboxbrdrclr,mboxbgclr,mboxfgclr,0);
					fedit=FALSE;
					break;
					
			case '3':
				print2screen(2,33,"Enter item code: ",BROWN,BLUE,0);
				gotopos(2,55);
				fflush(stdin);
				scanf("%s",&code);
				flag=0;
				rewind(dbf);
				while(fread(&inv_stock,stocksize,1,dbf)==1)
				{
					if(strcmp(inv_stock.itemcode,code)==0)
					{
						DisplayItemInfo();
						flag=1;
					}
				}
				if(flag=0)
					messagebox(10,33,"The item is not available.","No records found",'',,mboxbrdrclr,mboxbgclr,mboxfgclr,0);
					break;
					
			case '4':
				if(numitems==0)
					messagebox(10,33,"No items are available.","Error",'',,mboxbrdrclr,mboxbgclr,mboxfgclr,0);
				textcolor(BLUE);
				textbackground(BROWN);
				gotopos(3,33);
				cprintf("Number of items available in stock: %d",numitems);
				gotopos(4,33);
				getInvestmentInfo();
				cprintf("Total investment: Rs.%2.f",tot_investment);
				gotopos(5,33);
				cprintf("Press enter to view.Otherwise press any key...");
				fflush(stdin);
				if(getch()==13)
				{
					rewind(dbf);
					while(fread(&inv_stock,stocksize,1,dbf)==1);
						DisplayItemRecord(inv_stock,itemcode;
				}
				textcolor(BLUE);
				break;
				
			case '5':
				itemssold=0;
				i=0;
				top:
					print2screen(2,33,"Enter item code: ",BROWN,BLUE,0);
					fflush(stdin);
					gotopos(2,55);
					scanf("%s",&code);
				if(CheckId(code)==1)
					if(messagebox(10,33,"The item is not available.","No record found",'',,mboxbrdrclr,mboxbgclr,mboxfgclr,0)==13)
						goto top;
					else
						goto bottom;
					rewind(dbf);
				while(fread(&inv_stock,stocksize,1,dbf)==1);
				{
					if(strcmp(inv_stock.itemcode,code)==0)
					{
						issued_qty=IssuedItem();
						if(issued_qty>0)
						{
							itemsold+=1;
							strcpy(item_bill[i].itemcode,inv_stock.itemcode);
							strcpy(item_bill[i].itemname,inv_stock.itemname);
							item_bill[i].itemqty=issued_qty;
							item_bill[i].itemrate=inv_Stock.itemrate;
							item_bill[i].itemtot=inv_stock.itemrate*issued_qty;
							i+=1;
						}
						print2screen(19,33,"Would you like to issue another item(Y/N)?",BROWN,BLUE,0);
						fflush(stdin);
						gotopos(19,45);
						if(toupper(getch())=='Y')
							goto top;
						bottom:
						break;
					}
				}
				break;
				
			case '6':
				if(numItems<=0)
				{
					messagebox(10,33,"No items are available.","Items not found",'',,mboxbrdrclr,mboxbgclr,mboxfgclr,0);
					break;
				}
				print2screen(3,33,"Stocks of these items is on the minimum level:",BROWN,RED,0);
				fflush(stdin);
				flag=0;
				fflush(stdin);
				rewind(dbf);
				while(fread(&inv_stock,stocksize,1,dbf)==1)
				{
					if(inv_stock.itemqty<=inv_stock.minqty)
					{
						DisplauItemInfo();
						flag=1;
					}
				}
				if(flag==0)
					messagebox(10,33,"No item is currently at reorder level.","Reorder Items",'',mboxbrdrclr,mboxbgclr,mboxfgclr,0);
					break;
				
			default:
				messagebox(10,33,"The option you entered is not available.","Invalid option",'',mboxbrdrclr,mboxbgclr,mboxfgclr,0);
				break;		
		}
	}
}

ShowMenu()
{
	if(sec1_bgclr != BROWN || sec1_symb != ' ')
		fillcolor(2,1,23,39,sec1_symb,sec1_bgclr,sec1_fgclr,0);
	if(sec2_bgclr != BROWN || sec2_symb != ' ')
		fillcolor(2,40,23,79,sec2_symb,sec2_bgclr,sec2_fgclr,0);
	print2screen(2,2,"1: Add an item",menutextbgclr,menutextfgclr,0);
	print2screen(4,2,"2: Edit item information",menutextbgclr,menutextfgclr,0);			
	print2screen(6,2,"3: Show item information",menutextbgclr,menutextfgclr,0);
	print2screen(8,2,"4: View stock report",menutextbgclr,menutextfgclr,0);
	print2screen(10,2,"5: Issue items form stock",menutextbgclr,menutextfgclr,0);
	print2screen(12,2,"6: View items to be ordered",menutextbgclr,menutextfgclr,0);
	print2screen(14,2,"0: Close the application",menutextbgclr,menutextfgclr,0);
	
	htskin(0,0,' ',80,appframeclr,LIGHTGREEN,0);
	htskin(1,0,' ',80,appframeclr,LIGHTGREEN,0);
	vtskin(0,0,' ',24,appframeclr,LIGHTGREEN,0);
	vtskin(0,79,' ',24,appframeclr,LIGHTGREEN,0);
	htskin(24,0,' ',80,appframeclr,LIGHTGREEN,0);
	vtskin(0,31,' ',24,appframeclr,LIGHTGREEN,0);
	return;
}

getUserResponse()
{
	int ch,i;
	animcounter=0;
	
	while(!kbhit())
	{
		getmousepos(&button,&row,&coloumn);
	
	BlinkText(0,27,"Inventory management system\nMauray_DEEP",1,YELLOW,RED,LIGHTGRAY,0,50);
	animcounter+=1;
	
	i++;
	if(button==1 && row==144 && coloumn>=16 && coloumn<=72)
		return('0');
	if(button==1 && row==16 && coloumn>=16 && coloumn<=136)
		return('1');
	if(button==1 && row==32 && coloumn>=16 && coloumn<=144)
		return('2');
	if(button==1 && row==48 && coloumn>=16 && coloumn<=160)
		return('3');
	if(button==1 && row==64 && coloumn>=16 && coloumn<=104)
		return('4');
	if(button==1 && row==80 && coloumn>=16 && coloumn<=144)
		return('5');
	if(button==1 && row==96 && coloumn>=16 && coloumn<=152)
		return('6');
	}
	ch=getch();
	return ch;
}

getdata()
{
	char tmp[8];
	float tst;
	_setcursortype(_NORMALCURSUR);
	print2screen(3,33,"Enter item code: ",BROWN,BLUE,0);
	fflush(stdin);
	gotopos(3,53);
	scanf("%s",&tmp);
	if(CheckId(tmp)==0 && fedit==FALSE)
	{
		messagebox(10,33,"The id already exists.","Error",'',mboxbrdrclr,mboxbgclr,mboxfgclr,0);
		return 0;
	}
	strcpy(inv_stock.itemcode,tmp);
	print2screen(4,33,"Name of the item: ",BROWN,BLUE,0);
	fflush(stdin);
	gotopos(4,53);
	gets(inv_stock.itemname);
	print2screen(5,33,"Price of each unit: ",BROWN,BLUE,0);
	fflush(stdin);
	gotopos(5,53);
	scanf("%f",&inv_stock.itemrate);
	print2screen(6,33,"Quantity: ",BROWN,BLUE,0);
	fflush(stdin);
	gotopos(6,53);
	scanf("%f",&inv_stock.itemqty);
	print2screen(7,33,"Reorder level: ",BROWN,BLUE,0);
	fflush(stdin);
	gotopos(7,53);
	scanf("%d",&inv_stock.minqty);
	_setcursortype(_NOCURSOR);
	return 1;
}

int CheckId(char item[8])
{
	rewind(dbf);
	while(fread(&inv_stock,stocksize,1,dbf)==1)
		if(strcmp(inv_stock.itemcode,item)==0)
			return(0);
	return(1);
}

DisplayItemsRecord(char idno[8])
{
	rewind(dbf);
	while(fread(&inv_stock,stocksize,1,dbf)==1)
		if(strcmp(idno,inv_stock.itemcode)==0)
			DisplayItemInfo();
	return;
}

DisplayItemInfo()
{
	int r=7;
	textcolor(menutextfgclr);
	textbackground(menutextbgclr);
	gotopos(r,33);
	cprintf("Item code: %s","						");
	gotopos(r,33);
	cprintf("Item code: %s",inv_stock.itemcode);
	gotopos(r+1,33);
	cprintf("Name of the item: %s","						");
	gotopos(r+1,33);
	cprintf("Name of the item: %s",inv_stock.itemname);
	gotopos(r+2,33);
	cprintf("Price of each unit: %2.f","						");
	gotopos(r+2,33);
	cprintf("Price of each unit: %2.f",inv_stock.itemrate);
	gotopos(r+3,33);
	cprintf("Quality in stock: %4.f","						");
	gotopos(r+3,33);
	cprintf("Quality in stock: %4.f",inv_stock.itemqty);
	gotopos(r+4,33);
	cprintf("Reorder level: %d","						");
	gotopos(r+4,33);
	cprintf("Reorder level: %d",inv_stock.minqty);
	gotopos(r+5,33);
	cprintf("\nPress any key...");
	fflush(stdin);
	getch();
	textbackground(BROWN);
	textcolor(BLUE);
	return;
}

IssueItem()
{
	float issueqnty;
	DisplayItemInfo();
	print2screen(15,33,"Enter Quantity: ",BROWN,BLUE,0);
	fflush(stdin);
	gotopos(15,49);
	scanf("%f",&issueqnty);
	if((inv_stock.itemqty - issueqnty) >= inv_stock.minqty)
	{
		textcolor(BLUE);
		textbackground(BROWN);
		gotopos(18,33);
		cprintf("%4.f Item(s) issued.",issueqnty);
		gotopos(19,33);
		cprintf("You should pay Rs. %2.f",issueqnty*inv_stock.itemrate);
		getch();
		textcolor(BLUE);
		inv_stock.itemqty-=issueqnty;
		fseek(dbf,-stocksize,SEEK_CUR);
		fwrite(&inv_stock,stocksize,1,dbf);
		return issueqnty;
	}
	else
	{
		messagebox(10,33,"Insufficient quantity in stock.","Insufficient stock",'',mboxbrdrclr,mboxbgclr,mboxfgclr,0);
		gotopos(17,33);
		textcolor(BLUE);
		textbackground(BROWN);
		cprintf("ONLY %4.f pieces of the Item can be issued.",inv_stock.itemqty-inv_stock.minqty);
		gotopos(18,33);
		cprintf("Press any key...");
		getch();
		textcolor(BLUE);
		textbackground(BROWN);
		return 0;
	}
}

float getInvestmentInfo(void)
{
	tot_investment=0;
	rewind(dbf);
	while(fread(&inv_stock,stocksize,1,dbf)==1)
		tot_investment+=(inv_stock.itemrate*inv_stock.itemqty);
	return tot_investment;
}

BackupDatabase(void)
{
	FILE *fback;
	fback=fopen("F:\\college work\\MCA\\c programming\\database\\InvManSys.dat","w");
	rewind(dbf);
	while(fread(&inv_stock,stocksize,1,dbf)==1)
		fwrite(&inv_stock,stocksize,1,fback);
	fclose(fback);
	return;
}

struct coors
{
	char cfg_name[10];
	
	int mboxbrdrclr;
	int mboxbgclr;
	int mboxfgclr;
	
	int menutextbgclr;
	int menutextfgclr;
	int appframeclr;
	
	int sec1_symb;
	int sec1_bgclr;
	int sec1_fgclr;
	
	int sec2_symb;
	int sec2_bgclr;
	int sec2_fgclr;
}clr;
const long int clrsize=sizeof(clr);

getConfiguration()
{
	FILE *flast;
	flast=fopen("lastcfg","r+");
	if(flast==NULL)
	{
		SetDefaultColor();
		return 0;
	}
	rewind(flast);
	fread(&clr,clrsize,1,flast);
#ifdef OKAY
	if(strcmp(clr.cfg_name,"lastclr")!=0)
	{
		SetDefaultColor();
		fclose(flast);
		return 0;
	}
#endif
	mboxbrdrclr=clr.mboxbrdrclr;
	mboxbgclr=clr.mboxbgclr;
	mboxfgclr=clr.mboxfgclr;
	
	menutextbgclr=clr.menutextbgclr;
	menutextfgclr=clr.menutextfgclr;
	appframeclr=clr.appframeclr;
	
	sec1_symb=clr.sec1_symb;
	sec1_fgclr=clr.sec1_fgclr;
	sec1_bgclr=clr.sec1_bgclr;
	
	sec2_symb=clr.sec2_symb;
	sec2_fgclr=clr.sec2_fgclr;
	sec2_bgclr=clr.sec2_bgclr;
	fclose(flast);
	return 1;
}

SetdefaultColor()
{
	mboxbrdrclr=BLUE,mboxbgclr=GREEN,mboxfgclr=WHITE;
	menutextbgclr=BROWN,menutextfgclr=BLUE,appframeclr=CYAN;
	sec1_symb=' ',sec1_fgclr=BLUE,sec1_bgclr=BROWN;
	sec2_symb=' ',sec2_fgclr=BLUE,sec2_bgclr=BROWN;
	return 1;
}

Blinktext(const int r,const int c,char txt[],int bgclr,int fgclr,int BGCLR2,int FGCLR2,int blink,const int dly)
{
	int len=strlen(txt);
	BGCLR2=bgclr;
	FGCLR2=BLUE;
	htskin(r,c,' ',len,bgclr,bgclr,0);
	print2screen(r,c,txt,bgclr,fgclr,blink);
	
	write2screen(r,c+animcounter+1,txt[animcounter],BGCLR2,FGCLR2,0);
	write2screen(r,c+animcounter+2,txt[animcounter+1],BGCLR2,FGCLR2,0);
	write2screen(r,c+animcounter+3,txt[animcounter+2],BGCLR2,FGCLR2,0);
	write2screen(r,c+animcounter+4,txt[animcounter+3],BGCLR2,FGCLR2,0);
	write2screen(r,c+animcounter+5,txt[animcounter+4],BGCLR2,FGCLR2,0);
	write2screen(r,c+animcounter+6,txt[animcounter+5],BGCLR2,FGCLR2,0);
	delay(dly*2);
	write2screen(r,c+animcounter+1,txt[animcounter],bgclr,fgclr,0);
	write2screen(r,c+animcounter+2,txt[animcounter+1],bgclr,fgclr,0);
	write2screen(r,c+animcounter+3,txt[animcounter+2],bgclr,fgclr,0);
	write2screen(r,c+animcounter+4,txt[animcounter+3],bgclr,fgclr,0);
	write2screen(r,c+animcounter+5,txt[animcounter+4],bgclr,fgclr,0);
	write2screen(r,c+animcounter+6,txt[animcounter+5],bgclr,fgclr,0);
	
	animcounter+=1;
	if(animcounter+5>=len) 
		animcounter=0;
	return;
}

write2screen(int row,int col,char ch,int bg_color,int fg_color,int blink)
{
	int attr;
	char far *v;
	char far *ptr=(char far*)0xb8000000;
	if(blink!=0)
		blink=128;
		
	attr=bg_color+blink;
	
	attr=attr<<4;
	attr+=fg_color;
	attr=attr|blink;
	v=ptr+row*160+col*2;
	*v=ch;
	v++;
	*v=attr;
	return 0;
}

print2screen(int row,int col,char string[],int bg_color,int fg_color,int blink)
{
	int i=row,j=col,strno=0,len;
	len=strlen(string);
	while(j<80)
	{
		j++;
		if(j==79)
		{
			j=0;
			i+=1;
		}
		write2screen(i,j,string[strno],bg_color,fg_color,blink);
		strno+=1;
		if(strno+=1);
		if(strno>len-1)
		break;
	}
	return;
}

htskin(int row,int coloumn,char symb,int no,int bg_color,int fg_color,int blink)
{
	int i;
	for(i=0;i<no;i++)
		write2screen(row,coloumn++,symb,bg_color,fg_color,blink);
	return;
}

vtskin(int row,int coloumn,char symb,int no,int bg_color,int fg_color,int blink )
{
	int i;
	for(i=0;i<no;i++)
		write2screen(row++,coloumn,symb,bg_color,fg_color,blink);
	return;
}

messagebox(int row,int column,char message[50],char heading[10],char symb,int borderclr,int bg_color,int fg_color,int blink)
{
	int len;
	char key,image[1000];
	len=strlen(message);
	capture_image(row,column,row+3,column+len+7,&image);
	draw_mbox(row,column,row+3,column+len+7,symb,symb,borderclr,YELLOW,blink,borderclr,YELLOW,blink);
	fillcolor(row+1,coloumn+1,row+2,column+len+6,' ',bg_color,bg_color,0);
	print2screen(row+1,column+2,message,bg_color,fg_color,blink);
	print2screen(row+2,column+2,"Press any key...",bg_color,fg_color,blink);
	print2screen(row,column+1,heading,borderclr,fg_color,blink);
	sound(400);
	delay(200);
	nosound();
	fflush(stdin);
	key==getch();
	put_image(row,column,row+3,column+len+7,&image);
	return key;
}

fillcolor(int top_row,int left_column,int bottom_row,int right_column,char symb,int bg_color,int fg_color,int blink)
{
	int i,j;
	for(i=top_row;i<=bottom_row;i++)
		htskin(i,left_column,symb,right_column-left_column+1,bg_color,fg_color,blink);
	return;
}

draw_mbox(int trow,int tcolumn,int brow,int bcolumn,char hsymb,char vsymb,int hbg_color,int hfg_color,int hblink,int vbg_color,int vfg_color,int vblink)
{
	htskin(trow,tcolumn,hsymb,bcolumn-tcolumn,hbg_color,hfg_color,hblink);
	htskin(brow,tcolumn,hsymb,bcolumn-tcolumn,hbg_color,hfg_color,hblink);
	vtskin(trow,tcolumn,vsymb,brow-trow+1,vbg_color,vfg_color,vblink);
	vtskin(trow,bcolumn,vsymb,brow-trow+1,vbg_color,vfg_color,vblink);
	return;
}

capture_image(int toprow,int leftcolumn int bottomrow,int rightcolumn,int *image)
{
	char far *vidmem;
	int i,ii,count;
	count=0;
	for(i=toprow;i<=bottomrow;i++)
		for(j=leftcolumn;j<=rightcoumn;j++)
		{
			vidmem=(char far*)0xB8000000+(i*160)+(j*2);
			image[count]=*vidmem;
			image[count+1]=*(vidmem+1);
			count+=2;
		}
	return;
}

put_image(int toprow,int leftcolumn,int bottomrow,int rightcoloumn,int image[])
{
	char far *ptr=(char far*)0xB8000000;
	char far *vid;
	int i,j,count;
	count=0;
	for(i=toprow;i<=bottomrow;i++)
		for(j=leftcolumn;j<=rightcoumn;j++)
		{
			vid=ptr+(i*160)+(j*2);
			*vid=image[count];
			*(vid+1)=image[count+1];
			count+=2;
		}
	return;
}

gotopos(int r,int c)
{
	union REGS i,o;
	i.h.ah=2;
	i.h.bh=0;
	i.h.dh=r;
	i.h.dl=c;
	int86(16,&i,&o);
	return 0;
}

union REGS i,o;

initmouse()
{
	i.x.ax=0;
	int86(0x36,&i,&o);
	return(o.x.ax);
}

showmouseptr()
{
	i.x.ax=1;
	int86(0x36,&i,&o);
	return;
}

getmousepos(int *button,int *x,int *y)
{
	i.x.ax=3;
	int86(0x36,&i,&o);
	*button=o.x.bx;
	*x=o.x.dx;
	*y=o.x.cx;
	return 0;	
}

setdefaultmode()
{
	set25x80();
	setdefaultcolor();
	return;
}

setdefaultcolor()
{
	int i;
	char far *vidmem=(char far*)0xB8000000;
	window(1,1,80,25);
	clrscr();
	for(i=1;i<4000;i+=2)
		*(vidmem+i)=7;
	_setcursortype(_NORMALCURSOR);
	return;
}

set25x80()
{
	asm mov ax,0x0003;
	asm int 0x10;
	return;
}
