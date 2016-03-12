#include<stdio.h>
#include<conio.h>
void main (void)
{
	int a;
	clrscr();
	puts("\n\n\tENTER NEGATIVE AND POSITIVE NUMBER");
	flushall();
	scanf("%d",&a);
	if(a>=1){
		printf("YOU HAVE ENTERED POSITIVE %d: ",a);
		}
		if(a<=-1){
		printf("YOU HAVE ENTERED NEGATIVE %d: ",a);
			 }
		if(a==0){
		     printf("YOU HAVE ENTERED %d",a);

			}
getch();
}