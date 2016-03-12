# include<stdio.h>
# include<conio.h>
void main(void)
{
clrscr();
int b;
printf("ENTER EVEN OR ODD NUMBER\n");
scanf("%d",&b);
	if(b%2==0){
		  printf("%d is EVEN",b);
		  }if(b%2!=0){
			     printf("%d is ODD",b);
			     }
getch();
}