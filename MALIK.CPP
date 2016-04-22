# include<iostream.h>		//Turbo C compiler
# include<conio.h>
# include<stdio.h>
# include<stdlib.h>
struct data{
	int info;
	data *ptr;
};
data *start;
int main(){
	start->ptr=NULL;
	int num,count =0;
	data *temp,*a;


	do{
		clrscr();
		gotoxy(50,22);
		printf("FARRUKH MALIK");
		gotoxy(1,1);
		cout<<"\t\tSTACK WITH THE HELP OF LINKED LIST\n";
		cout<<"1.insert data\n2.delete data\n3.display\n4.exit\n";
		puts("ENTER YOUR CHOICE: ");
		flushall();
		cin>>num;
		if(num ==1){
			printf("\nEnter a data: ");
			int entry;
			flushall();
			cin>>entry;
			if(start->ptr == start){
				a = new data;
				a->info = entry;
				a->ptr = temp;
				temp = a;
			     //	printf("\n%d address of temp at if point",temp->ptr);
				count++;

			}else{
				temp = new data;
				temp->info= entry;
				temp->ptr = start;
				start = temp;
				count++;

			}

	}else
	if(num==2){
		if(count==0){
			cout<<"THERE IS NO SUCH DATA TO DELETE";

		}else{
			cout<<"number "<<temp->info<<" is deleted";
			temp=temp->ptr;
			count--;
		}
		printf("\npress any key to continue");
		getch();
	}else
	if(num==3){
		data *tempo;
		tempo = temp;
		int i=1;
		printf("Display\n");
		while(i<=count){
		   cout<<tempo->info<<"\n";
		   temp = tempo->ptr;
		   i++;

		}
	printf("\npress any key to continue");
	getch();
	}else
	if(num==4){
		exit(0);
	}
	else{
	puts("WRONG CHOICE");
	}
	}while(1);
				//perfect run in turbo c compiler

	getch();
return 0;
}