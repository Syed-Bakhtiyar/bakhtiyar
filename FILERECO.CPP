# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<iostream.h>
class record{
	public:
	char name[40];
	int  age;
	float salary;
	char cellnum[15];

};
int main(){
	 clrscr();
	 record a;
	 int size = sizeof(a);
	 FILE *f;
	 if((f=fopen("abc.txt","wb+"))==NULL){
		cout<<"can't open file:";
		exit(1);

	 }
	 cout<<"1.add record\n2.exit\n";


	 do{
	   cout<<"ENTER YOUR CHOICE: ";
	   char choi
	   ce=getche();
	   switch(choice){

	    case '1':

	       char another = 'y';
	       while(another=='y'){

	       cout<<"enter name: ";
	       flushall();
	       cin>>a.name;

	       cout<<"enter age: ";
	       cin>>a.age;

	       cout<<"enter salary: ";
	       cin>>a.salary;
	       fwrite(&a,size,1,f);
	       cout<<"you want to add another record? y/n: ";
	       another = getche();
	       }
	    break;
	    case '2':
	    fclose(f);
	    exit(0);
	    break;




	   }




	 }while(1);









getch();
return 0;
}
