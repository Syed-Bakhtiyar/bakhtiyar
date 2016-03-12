# include<iostream.h>
# include<stdlib.h>
# include<conio.h>
//using namespace std;
template <class atype>
int find(atype* array,atype value,int size){
	for(int i=0;i<size;i++){
		if (array[i]==value){
			return i;
		}
	}
	return -1;
}

	char charr[] = {1,3,5,9,11,13};
	char ch=5;
	char intarr[] = {1,3,5,9,11,13};
	char in = 6;
	long lonarr[] = {1l,3l,5l,9l,11l,13l};
	long lo= 11l;
	double dubarr[] = {1.0,3.0,2.0,9.0,11.0,13.0};
	double db = 4.0;

int main(){
	system("CLS");
	cout<<"\n 5 in chrarray: index = "<<find(charr,ch,6);
	cout<<"\n 6 in intarray: index = "<<find(intarr,in,6);
	cout<<"\n 11 in chrarray: index = "<<find(lonarr,lo,6);
	cout<<"\n 4 in chrarray: index = "<<find(dubarr,db,6);
	cout<<endl;
	getche();
	system("PAUSE");
	return 0;
}
