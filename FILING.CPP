#include<stdio.h>
#include<conio.h>

int main(void){
	clrscr();

	FILE *f1;
	char ch;

	f1 = fopen("textfile.txt","a+");
	if(f1 == NULL){
		puts("unable to open file");
	}

	while(  ( ch = getche() ) != '\r' ){
		fputc(ch, f1);
	}

	while( ( ch=fgetc(f1) ) != EOF){

			printf("\n%c",ch);
		}

	fclose(f1);
	getch();
	return 0;	
}
