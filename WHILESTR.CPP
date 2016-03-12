# include<stdio.h>
# include<conio.h>
void main(){
clrscr();
int a = 0;
char b[80];
while(a<10){
gets(b);
printf("%d %s",a,b);
printf("\n aaaa\n");
//char x = getche();
flushall();
if(getch()=='n')
break;
a++;
}
getch();
}