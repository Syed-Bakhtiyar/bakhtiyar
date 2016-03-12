# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<string.h>
void main(void){
clrscr();
char a[]="";
FILE *bakhtiyar;
bakhtiyar = fopen("NAMELIST.txt","w");
if(fopen==NULL){
	puts("cant open file");
	       }
int y=1;
start:
gotoxy(50,y);
flushall();
//scanf("%[^\n]",a);
gets(a);
if (strcmp("exit",a)==0){
	exit(0);
	}
gotoxy(1,y);
printf("%s\n",a);
fprintf(bakhtiyar,"%s\n",a);
y++;

goto start;
fclose(bakhtiyar);


//end:
//gotoxy(60,23);
getch();
}