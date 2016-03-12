# include<iostream.h>
# include<conio.h>
# include<stdlib.h>
void main(void){
clrscr();
int a=0,b=0,score=0;
int array[10][10]={{1,0,1,0,1,0,1,0,1,0},
		   {0,1,0,1,0,1,0,1,0,1},
		   {1,0,1,0,1,0,1,0,1,0},
		   {0,1,0,1,0,1,0,1,0,1},
		   {1,0,1,0,1,0,1,0,1,0},
		   {0,1,0,1,0,1,0,1,0,1},
		   {1,0,1,0,1,0,1,0,1,0},
		   {0,1,0,1,0,1,0,1,0,1},
		   {1,0,1,0,1,0,1,0,1,0},
		   {0,1,0,1,0,1,0,1,0,1}};
for(int i=0; i<10;i++){
	for(int j =0; j<10; j++){
	cout<<"*";
	}
	cout<<endl;

}
cout<<"PLAY :"<<endl;
cin>>a;
cin>>b;
cout<<"score"<<endl;




system("pause");
}