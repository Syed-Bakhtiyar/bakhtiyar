# include<iostream.h>		//Turbo C compiler
# include<conio.h>
# include<stdio.h>
# include<stdlib.h>
class node{
    public:
	int info;
	node *next;
};

node *head = NULL;

int main(){


	int num=0;
	node *temp;


	do{
		clrscr();
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

			if(head == NULL){
				temp = new node;
				temp->info = entry;
				temp->next = NULL;
				head = temp;
			     //	printf("\n%d address of temp at if point",temp->ptr);
				//count++;
			}else{
				temp = new node;
				temp->info= entry;
				temp->next = head;
				head = temp;
				//count++;
			}

	}else if(num==2){
		if(head == NULL){
			cout<<"THERE IS NO SUCH DATA TO DELETE";

		}else{
			cout<<"number "<<head->info<<" is deleted";
			head=head->next;

		}
		printf("\npress any key to continue");
		getch();

	}else if(num==3){

		node *tempo;
		tempo = head;
		int i=0;
		printf("Display:\n");



		while(tempo != NULL){

		  printf("%d ", tempo->info);

		  tempo = tempo->next;

		  i++;

		}
		if(head == NULL){
		    cout<<"THERE IS NO SUCH DATA TO DELETE";

		}

	printf("\npress any key to continue");
	getch();
	}else if(num==4){
		exit(0);
	}
	else{
	puts("WRONG CHOICE");
	}
	}while(1);
				//perfect run in turbo c compiler

       //	getch();
	//return 0;
}
