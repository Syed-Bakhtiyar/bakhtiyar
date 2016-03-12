#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(void){
clrscr();
char name[40];
char a;
int b;
printf("ENTER ANY NUMBER OR WORD: ");
scanf("%[^\n]",name);
printf("ENTER YOUR SEARCH CHARACTER: ");
scanf("%c",&a);
b=strchr(name,a);
if(b==0){
printf("character was not found: ");
}
getch();
}