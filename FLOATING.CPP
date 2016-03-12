# include <stdio.h>
# include <conio.h>
void main (void)
{
int a,b;
char op;
float r;
clrscr();
printf("Now Start \n==*+*==\n Enter Any Two Digits:");
printf("\n 1-add");
printf("\n 2-sub");
printf("\n 3-mul");
printf("\n 4=div");
printf("\n 5-exit");
printf("\n Enter your choise:");
scanf("%c", &op);

if (op=='1')
{
printf("enter first no:");
scanf("%d", &a);
printf("enter second no:");
scanf("%d", &b);
r=a+b;
printf("%f", r);
getch();
}
else if(op=='2')
{
printf("enter first no:");
scanf("%d", &a);
printf("enter second no:");
scanf("%d", &b);
r=a-b;
printf("%f", r);
getch();
}
else if(op=='3')
{
printf("enter first no:");
scanf("%d", &a);
printf("enter second no:");
scanf("%d", &b);
r=a*b;
printf("%f", r);
getch();
}
else if(op=='4')
{
printf("enter first no:");
scanf("%d", &a);
printf("enter second no:");
scanf("%d", &b);
r=a/b;
printf("%f", r);
getch();
}
else {
printf("\n invalid command:");
("exit:");
}
}
