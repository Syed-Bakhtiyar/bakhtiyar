# include<iostream>
# include<stdlib.h>
# include<conio.h>
using namespace std;
int add(int,int);
int sub(int,int);
int divide(int,int);
int multiply(int,int);
int main(){
	int a,b;
	int c;
	char z;
	start:
	system("CLS");
	cout<<"\n1.add\n2.sub\n3.divide\n4.multiply\nPRESS ANY KEY\n";
	z=getch();
	switch(z){
	case '1':
		cout<<"ENTER FIRST NUMBER: ";
		cin>>a;
		cout<<"ENTER SECOND NUMBER: ";
		cin>>b;
		c=add(a,b);	
		cout<<endl<<"answer is: "<<c<<endl;
		break;
	case '2':
		cout<<"ENTER FIRST NUMBER: ";
		cin>>a;
		cout<<"ENTER SECOND NUMBER: ";
		cin>>b;
		c=sub(a,b);
		cout<<"answer is: "<<c<<endl;
		break;
	case '3':
		cout<<"ENTER FIRST NUMBER: ";
		cin>>a;
		cout<<"ENTER SECOND NUMBER: ";
		cin>>b;
		if(b==0){
			cout<<"cannot divide by zero"<<endl;
		}else{
		c=divide(a,b);
		cout<<"answer is: "<<c<<endl;
		}
		break;
	case '4':
		cout<<"ENTER FIRST NUMBER: ";
		cin>>a;
		cout<<"ENTER SECOND NUMBER: ";
		cin>>b;
		c=multiply(a,b);
		cout<<"answer is: "<<c<<endl;
		break;
	default:
		cout<<"ENTER AN INVALID COMMAND";
		cout<<"\npress 'y' to start again\n";
		if((z=getch())=='y'){
		goto start;
		}else{
		exit(0);
		}

	}
	
system("PAUSE");
return 0;
}


int add(int x,int y){
	int temp =x+y;
	return temp;

}
int sub(int x,int y){
	int temp = x-y;
	return temp;
}
int divide(int x,int y){
	int temp ;
	temp = x/y;
	return temp;
}
int multiply(int x,int y){
	int temp;
	temp=x*y;
	return temp;
	}