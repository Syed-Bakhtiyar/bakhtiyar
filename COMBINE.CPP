#include<stdio.h>
#include<conio.h>
void main (void)
{
	int a;
	char op;
	clrscr();
	printf("ENTER EVEN OR ODD NUMBER AND POSITIVE OR NEGATIVE NUMBER: ");
	flushall();
	scanf("%d",&a);
	flushall();
	scanf("%c",&op);
	printf("ENTER ANY DIGITS\n");
	if(op>=2){
		if(a%2==0){
			printf("YOU HAVE ENTERED AN EVEN NUMBER %d : ",a);
		}else{
			printf("YOU HAVE ENTERED AN ODD NUMBER %d: ",a);
		}
		getch();
		}

	if(op>=3){
		if(a>0){
			printf("YOU HAVE ENTERED POSITIVE %d",a);
			}if(a<0){
			printf("YOU HAVE ENTERED NEGATIVE %d",a);
			}
			 getch();
			}else{
				printf("YOU HAVE ENTERED %d :",a);
			}
getch();
}