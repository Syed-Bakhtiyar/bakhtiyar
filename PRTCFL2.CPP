# include<stdio.h>
# include<conio.h>
# define size 10
void main(){
clrscr();
int arr[size];
int brr[size];
int i,distbyte;
FILE *ptr;
ptr = fopen("arr.DAT","rb+");
	printf("enter number\n");
	for(i=0;i<size;i++){

// 		scanf("%d",&arr[i]);

	}
//	fwrite(&arr,sizeof arr,1,ptr);
	distbyte=ftell(ptr);
	gotoxy(20,7);
	printf("number of distance is: %d",distbyte);
	rewind(ptr);
	fread(&brr,sizeof arr,1,ptr);
	printf("\n\nbefore changing\n");
	for(i=0;i<size;i++){
		printf("\n%d",brr[i]);
	}
	fseek(ptr,-6,SEEK_CUR);
	int a=50;
	fwrite(&a,sizeof a,1,ptr);


	printf("\nafter changing\n");
	rewind(ptr);
	fread(&brr,sizeof arr,1,ptr);
	for(i=0;i<size;i++){
	printf("\n%d",brr[i]);
	}
	fclose(ptr);

getch();
}