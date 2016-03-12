#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
int a,b,result,choice,test;
do{
clrscr();
printf("\n\t\t****LOGIC GATE****\t\t\t");
printf("\n\nEnter Two Numbers Note: Number should be are 0 & 1.");
printf("\n\t\tEnter first number:");
scanf("\n\t\t%d",&a);
printf("\n\t\tEnter second number:");
scanf("\n\t\t%d",&b);
if( (a==0 || a==1) && (b==0 || b==1) ){
printf("\nWhich Gate You want to check between above two input");
printf("\n\t\tOR-1");
printf("\n\t\tAND-2");
printf("\n\t\tXOR-3");
printf("\n\t\tEXIT-0");
printf("\n\t\tENTER YOUR CHOICE NUMBER:");
scanf("%d",&choice);
switch (choice){
case 0:
exit(0);
break;
case 1:
//clrscr();
printf("\n\t\tOR\t\t");
if (a || b)
{
printf("\nResult=1" );
break;
getch();
}
else{
printf("\nResult= 0");
break;
}
case 2:
//clrscr();
printf("\n\t\tAND\t\t");
if(a && b){
printf("\nResult= 1");
getch();
break;
}
else{
printf("\nResult= 0");
break;
}
case 3:
printf("\n\tXOR");
if((a ==0 && b==0)||(a==1 && b==1)){
printf("Result: 1");
}
else{
printf("Result: 0");
}
default:
printf("Incorrect Operator Choice");
}
printf("\nDo yo Want to continue press 1 and 0 for close:");
scanf("%d",& test);
}
else{
printf("Incorrect Input");
getch();
printf("\nDo yo Want to continue press 1 and 0 for close:");
scanf("%d",& test);
}
}while(test);
}
