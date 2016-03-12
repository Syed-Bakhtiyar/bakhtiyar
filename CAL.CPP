#include<conio.h>
#include<stdio.h>
void main (void){
int a, c, b, d;
clrscr();
puts("\t\tcalcutaor");
puts("\n pres 1 to add\npress 2 to sub\npress 3 to multi\npress 4 to divide");
scanf("%d",&a);
if(a==1){
printf("\nenter first no : ");
scanf("%d",&b);
printf("\nenter second no");
scanf("%d",&c);
d=b+c;
printf("\n%d",d);
}
else if(a==2){
printf("\nenter first no : ");
scanf("%d",&b);
printf("\nenter second no : ");
scanf("%d",&c);
d=b-c;
printf("%d",d);
}
else if(a==3){
printf("\nenter first no : ");
scanf("%d",&b);
printf("\nenter second no : ");
scanf("%d",&c);
d=b*c;
printf("%d",d);
}
else{
printf("this no is rong");

}


getch();
}