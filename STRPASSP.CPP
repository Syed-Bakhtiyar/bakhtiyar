# include<stdio.h>
# include<iostream.h>
# include<conio.h>
# include<string.h>
void function(char *,int);
int main(){
clrscr();
char name[]="";
gets(name);
int len = strlen(name);
function(name,len);
getch();
return 0;
}

void function(char *a,int len){
for(int i=0;i<=len;i++){
	printf("%c",*(a+i));
}

}
