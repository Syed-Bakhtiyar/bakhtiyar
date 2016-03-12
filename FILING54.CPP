#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main(void){

	FILE *fptr;

	if(  (fptr=fopen ("abc.txt","a+")) == NULL   ){


		printf("File cant open");
		exit(1);
	}
	char a[81];
	printf("Type your line: ");
	gets(a);

	while(  strlen(a)  ){

		fputs(a,fptr);
		fputs("\n",fptr);
		gets(a);

	}

	 fclose(fptr);

getch();
}