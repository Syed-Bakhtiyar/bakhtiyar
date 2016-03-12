# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
int main(){
char a[] = "";
FILE *fptr;
if((fptr=fopen("test.txt","w+")) ==NULL){
	printf("can't open file'");
	exit(1);
}


char b='y';
while(b!='n'){
	puts("ENTER NAME OF STUDENTS: ");
	gets(a);
	
	fputs(a,fptr);
	fputs("\n",fptr);
	puts("press y to another entry and n to close ");
	b=getche();
}
fclose(fptr);

	return 0;
}
