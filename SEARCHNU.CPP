# include<stdio.h>
# include<conio.h>
int main(void){
	clrscr();
	int array[10],i=0,search;
	while(i<10){
	scanf("%d",&array[i]);
	i++;
	}
	printf("\nENTER A NUMBER TO SEARCH IN ARRAY: ");
	flushall();
	scanf("%d",&search);
	for(i=0;i<10;i++){
		if(search==array[i]){
			printf("\n%d found in %d index of array: \n",search,i);
			//goto end;
		}
	}
	for(i=0;i<10;i++){
		if(search !=array[i]){
			printf("\nsorry! number not found in array: ");
		}
       }
end:
getch();
return 0;
}