# include<stdio.h>
# include<conio.h>
int arg(int,int);
void main(void){
	clrscr();
	int a,b,c;
	printf("enter 1st number: \n");
	scanf("%d",&a);
	printf("enter 2nd number: \n");
	scanf("%d",&b);
	c=arg(a,b);
	printf("%d",c);
getch();
}
int arg(int x,int y){
	      int j;
	      j=x+y;
	      return j;
	      }