			//SORTING 1
# include<stdio.h>
# include<conio.h>
void main(void){
	clrscr();
	int no[10],swap;
	printf("***+ENTER NUMBERS TO SORT ASSCENDING TO DESCENDING+***\n");
	for(int i=0;i<10;i++)
	scanf("%d",&no[i]);

	for(int j=0;j<10;j++){
		for(int k=j+1;k<10;k++){ //k=1,j=0
		       if(no[j]>no[k]){
			swap=no[k];
			no[k]=no[j];
			no[j]=swap;
			}
	       }
	}
	printf("output is here: \n");
	for(i=0;i<10;i++)
	printf("\n%d",no[i]);

getch();
}