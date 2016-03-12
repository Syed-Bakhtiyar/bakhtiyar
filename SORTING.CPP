# include<stdio.h>
# include<conio.h>
void main(void){
clrscr();
int arr[10];
int count=0;
int a=1;
for(int i=0;i<10;i++){
	printf("type %d value :",a);
	scanf("%d",&arr[i]);
	a++;
}
for(i =0;i<10;i++){

	for(count=0;count<10;count++){
		int temp;
		if(arr[i]<arr[count]){
		temp=arr[i];
		arr[i]=arr[count];
		arr[count] = temp;   //a=5,
		}
		}
	}
	for(i=0;i<10;i++){

	printf("%d\n",arr[i]);
	}
getch();
}