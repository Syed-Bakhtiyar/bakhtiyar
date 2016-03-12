# include<iostream.h>
# include<stdlib.h>
//using namespace std;
int main(){
	system("CLS");
	int array[10];
	for(int i=0;i<10;i++){
			cin>>array[i];
	}
	for(i=0;i<10;i++){
		for(int j=-1;j<9;j++){
			if(array[i]>array[j+1])
			if(j==10){
				goto loop;
			}else{


			array[i]=array[j+1];
	}
		}

	loop:
	}
	for(i=0;i<10;i++){
		cout<<endl<<endl<<array[i] << endl;
	}

system("PAUSE");
return 0;
}
