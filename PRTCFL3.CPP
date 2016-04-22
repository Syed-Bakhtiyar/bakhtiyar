# include<stdio.h>
# include<conio.h>
void main(){
FILE *ptr;
clrscr();
int brr[10];
ptr = fopen("arr.DAT","wb+");
fread(&brr,sizeof brr,1,ptr);
for(int i=0;i<10;i++){
printf("%d\n",brr[i]);
}
printf("\t%d",ftell(ptr));
fseek(ptr,-(ftell(ptr)),SEEK_CUR);

for(i=0;i<10;i++){
	brr[i]=0;
}
fwrite(&brr,sizeof brr,1,ptr);
fclose(ptr);
getch();
}