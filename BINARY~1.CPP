# include<stdio.h>
# include<conio.h>
# include<string.h>
struct emp{
	char name[80];
	int age;
	float salary;
};
int main(){
	char choice;
	clrscr();
	emp cpy;
	char tempname[80];
	int size = sizeof cpy;
	FILE *fptr;
	printf("1.insert\n2.read\n3.search\nEnter your choice: ");
	choice = getche();
	switch(choice){
	case '1':
	fptr = fopen("rec.DAT","wb+");
	printf("ENTER NAME: ");
	gets(cpy.name);
	printf("ENTER AGE: ");
	scanf("%d",&cpy.age);
	printf("enter salary: ");
	scanf("%f",&cpy.salary);
	fwrite(&cpy,size,1,fptr);
	fclose(fptr);
	break;
	case '2':
	fptr = fopen("rec.DAT","rb");
	fread(&cpy,size,1,fptr);
	printf("\n%s",cpy.name);
	printf("\n%d",cpy.age);
	printf("\n%f",cpy.salary);
	fclose(fptr);
	break;
	case '3':
	fptr = fopen("rec.DAT","rb");
	fseek(fptr,0,0);
	printf("\nenter name to search data: ");
	int find =0;
	flushall();
	gets(tempname);
     //	while(fptr != EOF){

	if((strcmp(cpy.name,tempname))==0){

		printf("\nthere is name");
		printf("\n%s",cpy.name);
		printf("\n%d",cpy.age);
		printf("\n%.2f",cpy.salary);
		find++;
		}
       //	}
	if(find==0){
		printf("no name");
	}
	fclose(fptr);

       break;
       case '4':
       fptr = fopen("rec.DAT","rb");
       FILE *ptr;
       ptr = fopen("temp.DAT","wb");
       fseek(fptr,0,0);


       break;

	default:
	 printf("enter wrong");
	}


	getch();
	return 0;
}
