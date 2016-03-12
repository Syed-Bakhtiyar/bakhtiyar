# include<stdio.h>
# include<conio.h>
void main(void)
{
clrscr();
int a;
printf("ENTER YOUR CHOICE: ");
printf("1.shut down\n2.restart");
scanf("%d",&a);
switch(a)
{
case 1:
	printf("YOUR SYSTEM WILL BE CLOSED AFTER 30 SECONDS: \n\n");
	printf("c:\\windows\\system32\\shutdown/s/t30\n\n");
break;
case 2:
	printf("YOUR SYSTEM WILL BE CLOSED AFTER 30 SECONDS: \n\n");
	printf("c:\\windows\\system32\\shutdown -s");
break;

default:
	printf("INVALID CHOICE");
}


getch();
}