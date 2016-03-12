# include<iostream>
# include<conio.h>
# include<stdlib.h>
using namespace std;
int main(int argc,char *argv[]){
cout<<"1.shutdown all programs\n2.restart the computer\n3.shutdown the computer"<<endl;
int x;
cin>>x;
for(;;){
	if(x==1){
	system("shutdown -f");
	}
	break;
	if(x==2){
	system("shutdown -r");
	}
	break;
	if(x==3){
	system("shutdown -s");
	}
	break;
	if(x==51){
	system("shutdown -s -t 1");
	}
	system("PAUSE");
}
}
