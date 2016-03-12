# include<stdio.h>
# include<conio.h>
int array[10];
void input(void);
void main(void){
int a=0;
clrscr();
input();
scanf("%d",&a);
if(a==1){
	  array[0]=0;
}
getch();
}

void input(void){
	for(int i=0; i<10; i++){
		flushall();
		scanf("%d",&array[i]);
	}
}