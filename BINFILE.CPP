# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
struct empl{
  char name[81];
  int age;
  float salary;
};
int main(){
clrscr();
empl cpy;
int size = sizeof cpy;
int offset = (sizeof cpy - sizeof cpy);
FILE *ptr;
	if((ptr = fopen("bin.rec","wb"))==NULL){
		printf("can't open file");
		getch();
		exit(1);

	}else{
	printf("enter name: ");
	gets(cpy.name);
	printf("ENTER AGE: ");
	scanf("%d",&cpy.age);
	printf("ENTER SALARY: ");
	scanf("%f",&cpy.salary);
	fwrite(&cpy,sizeof cpy,1,ptr);
	fseek(ptr,0,0);
	fread(&cpy,sizeof cpy,1,ptr);
	fprintf(ptr,"name is %s",cpy.name);
	fprintf(ptr,"age is %d",cpy.age);
	fprintf(ptr,"salary is %.2f",cpy.salary);


	}
fclose(ptr);
getch();
return 0;
}