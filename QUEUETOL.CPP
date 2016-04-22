# include<stdio.h>
# include<iostream.h>
# include<conio.h>
# include<stdlib.h>
struct node{
	public:
	node *next;
	int data;

};

node *head;
void funct(int);


	int main(){
		funct(1);
		return 0;
	}





void funct(int recive){
head = NULL;
	node *temp;

	int data;
	char choice;

	do{
		clrscr();
		puts("1.add\n2.delete\n3.display\n4.exit\nEnter your choice: ");
		flushall();
		choice = getche();
		printf("\n");
		switch(choice){
		case '1':
			puts("Enter data: ");
			flushall();
			cin>>data;
			if(head == NULL){
				temp = new node;
				temp->data = data;
				temp->next = head;
				head = temp;

			}else{
				temp = new node;
				temp->data=data;
				temp->next = head;
				head=temp;

			}
		break;
		case '2':
		while(temp->next->next==NULL){
		temp->next = NULL;
		goto outside;
		}
		outside:

		break;

		case '3':
		node *tempo = head;
			while(tempo!=NULL){
				cout<<tempo->data<<"  ";
				tempo = tempo->next;
			}
			printf("\n");
			system("PAUSE");

		break;

		case '4':
			exit(0);
		break;
		default:
			cout<<"wrong choice\n";
			system("PAUSE");

		}
	}while(recive);
}