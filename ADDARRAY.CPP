# include<stdio.h>
# include<conio.h>
void main(void){
clrscr();
int arr[10];
int temp;
for(int i=0;i<10;i++){
	scanf("%d",&arr[i]);
}
temp=arr[0];
for(int j=1;j<10;j++){
	temp=temp+arr[j];
}
printf("%d",temp);
getch();
}