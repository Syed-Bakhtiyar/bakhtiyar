# include<stdio.h>
# include<conio.h>
void func(int *);
void main(void){
clrscr();
int *a;
printf("address of only ointer is %d",&a);
int array[10]={0,1,2,3,4,5,6,7,8,9};
a=array;
printf("\nadress of array is %d and pointer is %d",array,a);
func(a);
//a=a;
printf("\npointer address of a is %d",&a);


getch();
}
void func(int *a){
	printf("\n");
	for(int i=0;i<10;i++){
		printf("%d ",(*a+i));
	}
}