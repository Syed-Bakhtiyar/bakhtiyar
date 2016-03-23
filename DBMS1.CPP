# include<stdio.h>
# include<conio.h>
# include<string.h>
# include<stdlib.h>
      struct data{
			 char name[40];
			 int roll;
			 char a;
		};
int main(void){
clrscr();
data s;
FILE *ptr;
char temp[40],select;
int size = sizeof s;
int choice;
//ptr=fopen("emp.DAT","wb+");
ptr = fopen("emp.DAt","rb+");
if(ptr==NULL){
	ptr = fopen("emp.DAT","wb+");
	printf("can't open file");
	getch();
	exit(1);
}
do{
printf("\n1.insert\n2.read\n3.modify\n4.search\n5.delete\n6.exit\nenter your choice: ");
flushall();
scanf("%d",&choice);

if(choice == 1){
select='y';
	while(select == 'y'){
		fseek(ptr,0,SEEK_END);
		printf("\nENTER NAME: ");
		flushall();
		gets(s.name);
		printf("what is roll number? ");
		scanf("%d",&s.roll);
		printf("if student is present press P else A: ");
		s.a=getche();
		fwrite(&s,size,1,ptr);
		printf("\nARE YOU WAN'T TO ADD ANOTHER RECORD? y/n: " );
		select = getche();

	}
}
else if(choice == 2){
	rewind(ptr);
	while(fread(&s,size,1,ptr)){
	printf("name: %s\n",s.name);
	printf("roll: %d\n",s.roll);
	printf("attendence: %c\n",s.a);
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
	}
}
else if(choice==3){
	select='y';
	while(select == 'y'){
		printf("\nENTER NAME TO MODIFY: ");
			flushall();
			gets(temp);
			rewind(ptr);
		while(fread(&s,sizeof s,1,ptr)){
			if(strcmp(temp,s.name)==0){
				printf("\nENTER NAME TO CHANGE: ");
				flushall();
				gets(s.name);
				printf("\nENTER ROLL NUMBER: ");
				scanf("%d",&s.roll);
				printf("\nENTER ATTENDENCE P/A: ");
				s.a = getche();
				fseek(ptr,-size,SEEK_CUR);
				fwrite(&s,size,1,ptr);
				printf("\nare you want to modify another student record? y/n: ");
				select = getche();
			}
		}
	}
}
else if(choice == 4){
	printf("ENTER NAME TO SEARCH STUDENT NAME: ");
	flushall();
	gets(temp);
	rewind(ptr);
	while(fread(&s,size,1,ptr)){
		if(strcmp(s.name,temp)==0){
			printf("\nname is: %s",s.name);
			printf("\nroll number is: %d",s.roll);
			printf("\nattendance is: %c",s.a);
		}

	}

}

else if(choice==5){
	printf("\nENTER NAME TO DELETE: ");
	flushall();
	gets(temp);
	rewind(ptr);
	FILE *t;
	t = fopen("temp.DAT","wb+");
	while(fread(&s,size,1,ptr)){
		if(strcmp(s.name,temp)!=0){
			fseek(t,0,SEEK_END);
			fwrite(&s,size,1,t);
		}


}
	fclose(t);
	fclose(ptr);
	remove("emp.DAT");
	rename("temp.DAT","emp.DAT");
	ptr = fopen("emp.DAT","rb+");

}
else if(choice == 6){
	fclose(ptr);
	exit(0);
	}
}while(1);
getch();
return 0;
}