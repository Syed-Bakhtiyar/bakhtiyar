# include<iostream.h>
# include<stdlib.h>
//using namespace std;
class op{
	private:
		int arr[1];
	public:
		op(int x,int y) {
			arr[0]=x;
			arr[1]=y;
			}
		op operator +(op cpy1){
			int add = arr[0]+cpy1.arr[0];
			int add2= arr[1]+cpy1.arr[1];
			op temp(add,add2);
			return temp(add,add2);
		}
//		op operator -(){
//		}
//		op operator /(){
//		}
//		op operator *(){
//		}
};
int main(){
	int a,b,c,d,p,t;
	cout<<"ENTER FIRST NUMBER: ";
	cin>>a;
	cout<<"ENTER second NUMBER: ";
	cin>>b;
	cout<<"ENTER third NUMBER: ";
	cin>>c;
	cout<<"ENTER fourth NUMBER: ";
	cin>>d;
	op cpy(a,b),cpy1(c,d),ans(p,t);
	ans(p,t) = cpy+cpy1;

	return 0;
}


