# include<stdio.h>
# include<conio.h>
void main(void){
	clrscr();
	int *b;     //declare pointer

	int a=10;
	b=&a;
	printf("%d",*b);

     //	printf("%d,\n%d",&a,a);
	scanf("%d",&a);
	printf("%d",a);

getch();
}