# include<stdio.h>
# include<conio.h>
void main(void)
{
clrscr();
start:
gotoxy(80,25);
int a=0,b;
printf("WRITE A TABLE OF YOUR CHOICE: ");
scanf("%d",&b);
while(a<10)	{
		printf("%d X %d=%d\n",b,a+1,(a+1)*b);
		a++;
		}
		if(getche()=='y'){
		goto start;
		}else{
		printf("YOU HAVE ENTERED WRONG");
		}
getch();
}
