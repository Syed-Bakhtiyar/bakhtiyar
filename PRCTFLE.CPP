# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
void main(){
int i=0,x,choice;
clrscr();
FILE *ptr;
printf("\n1.write, 2.read, 3.search, 4.exit");
while(1){
flushall();
choice = getch();
ptr = fopen("rec.DAT","rb+");
if(ptr==NULL){
printf("can't open file");
exit(0);
}else{
switch(choice){
	case '1':

	int b = ftell(ptr);
	printf("binary before increment is : %d\n",b);
	for(;i<10;i++){
		x=i;
		fwrite(&x,sizeof x,1,ptr);
	}
int bin = ftell(ptr);
printf("\nbinary number is: %d\n",bin);
getch();
break;
case '2':
	clrscr();
   //	fseek(ptr,(-bin*10),2);
	while((fread(&x,sizeof x,1,ptr))==1){
		printf("%d ",x);
	}
getch();
break;
case '3':
	clrscr();
	int find,a=0;
       //	 fseek(ptr,-bin,SEEK_END);
	 printf("enter number to find: ");
	 flushall();
	 scanf("%d",find);
	 while(fread(&x,sizeof x,1,ptr)){
		if(find==x){
		printf("\ndata is found");
		a++;
		goto bahir;
		}
	 }
	 bahir:
	 if(a==0){
	 printf("data not found");
	 }
	 getch();
	 break;
case '4':
	fclose(ptr);
	exit(0);

break;
default:
printf("\ninvalid choice");



} //switch
}

} //while



getch();
}