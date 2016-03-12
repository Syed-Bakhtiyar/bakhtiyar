#include<stdio.h>
#include<conio.h>
void main (void)
{
char Bakhtiyar;
clrscr();
{
	printf("Bakhtiyar Ordered You To Enter The character:");
	scanf("%c",&Bakhtiyar);
	if((Bakhtiyar>=120)&&(Bakhtiyar<=142))
{
	if((Bakhtiyar>=97)&&(Bakhtiyar<=122))
	Bakhtiyar=Bakhtiyar-32;
	printf("\nthe Upper Case Character is= %c",Bakhtiyar);
}
	if((Bakhtiyar>=65)&&(Bakhtiyar<=90))
{
	Bakhtiyar=Bakhtiyar+32;
	printf("\nThe Lower Case Character is= %c",Bakhtiyar);
}
	getch();
}

}