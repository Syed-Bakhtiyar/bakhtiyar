# include<stdio.h>
# include<conio.h>

main(){
	//clrscr();
	FILE *abc;
	abc=fopen("prn","w");
	fprintf(abc,"print");
	fclose(abc);

getch();
}
