# include<stdio.h>
# include<conio.h>
# include<string.h>
# include<stdlib.h>
void main(void){
clrscr();               //int a=0;
char name[]="";         //infinity elements apne andar lesakta he
//scanf("%[^\n]",name);
gets(name);
if(name=='\0'){
printf("invalid command");
}				 //strlwr(name);
if(strcmp(name,"exit")==0){      //compare strring agr farq zero he to true warna false
exit(0);
}				 //strlen string ki length bataata he
//
printf("%s",strlwr(name));       //small to capital
//puts(name);
//printf(name);
printf("\nREVERSE NAME\n");
printf("\t");
for(int i =strlen(name) ; i>-1;i--){
	printf("%c",name[i]);
}

getch();
}