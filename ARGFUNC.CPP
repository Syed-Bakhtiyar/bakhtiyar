# include<stdio.h>
# include<conio.h>
void func(int , char);
void main(void){
clrscr();
int a=0;
char b;
flushall();
scanf("%d",&a);
flushall();
scanf("%c",&b);
func(a,b);


getch();
}
void func(int x,char y){
	for(x ; x<10 ; x++){
		printf("%c",y);
		printf("\n");
	}

}