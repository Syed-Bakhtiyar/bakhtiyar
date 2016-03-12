# include<stdio.h>
# include<conio.h>
void main(void){
clrscr();
int x;
int *y;
x=20;
y=&x;
printf("\nvalue of x = %d",*y);
printf("\nAdress of y before incrementation = %u",y);
y++;
printf("\nAdress of y after incrementation = %u",y);
getch();
}