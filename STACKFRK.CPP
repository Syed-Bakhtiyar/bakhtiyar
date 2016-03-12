#include<iostream.h>
#include<stdlib.h>

class stack{
	private:
	       int arr[10];
	       int count;
	public:
		stack(){
		 count=-1;
		}
		void add(int a){
			count++;
			arr[count]=a;

		}
		void display(){

			for(int i=0; i<=count;i++){
				cout<< arr[i];
				}
		}
		void dlt(){
		      count--;
		}
		void search(int x){
			int c=0;
			for(int j=0; j<=count; j++){
			    if(x==arr[j]){
					cout<< "no he bhenchooo";
					c++;
			    }
			}
				if(c==0){
					cout<<"no ni he bhechoo";
				}
		}


};
int main(){
	stack s1;
	start:
	cout<<"press 1 for add\n";
	cout<<"press 2 for delete \n";
	cout<<"press 3 for display\n";
	cout<<"press 4 for search\n";
	cout<<"press 5 for exit\n";
	int a;
	cin>> a;
	switch(a){
		case 1:
	cout<<"enter a no.: ";
	int no;
	cin>>no;
	s1.add(no);
	goto start;
	break;
		case 2:
	s1.dlt();
	goto start;
	break;
		case 3:
	s1.display();
	goto start;
	break;
		case 4:
		int find;
	cout<<"enter number to find in data: ";
	cin>>find;
	s1.search(find);
	goto start;
	break;
		case 5:
	exit(0);
	break;
	default:
	cout<<"glt enter kyaa h bhenchoooo";

	}

	system("PAUSE");
	return 0;
}