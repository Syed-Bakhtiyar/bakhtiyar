#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(void){
/*
char a[] = "china";

puts(a);

gets(a);

puts(a);
*/
clrscr();

char a[10] = "Asif", b[10] = "iqbal", c[10] = "asif";


strupr(b);

//puts(b);

int z = strcspn(b,"ba");

printf("%d",z);

//puts(b);





getch();
}