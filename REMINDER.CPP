# include <stdio.h>
# include <conio.h>
void main (void)
{
	int a;
	clrscr();
	puts("ENTER EVEN AND ODD NUMBER: ");
	flushall();
	scanf("%d",&a);
	if(a%2==0){
		printf("%d IS EVEN",a);
	}else{
		printf("%d IS ODD",a);
	}

getch();
}



