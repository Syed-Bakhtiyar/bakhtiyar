# include<stdio.h>
# include<conio.h>
void main(void)
{
clrscr();
int a=0;
flushall();
scanf("%d",&a);
if(a==1){
 puts("ENTER FIRST TASK :");

 for(int i=0;i<5;i++){
	printf("\n");

	if(i%2 != 0){
		printf(" ");
	}

	for(int j=0;j<12;j++){

		printf("*");

	}

 }
}

getch();
}