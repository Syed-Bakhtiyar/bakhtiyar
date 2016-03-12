# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
# include<string.h>
//# include<system.h>




//255, 255

// 2,2

//0,0 0,1 0,2 
//1,0 1,1 1,2
//2,0 2,1 2,0



void gotoxy(short int col,short int row);
int main(){
	FILE *fp,*ft;
	char another,choice;
	struct emp{
		char name[40];
		int age;
		float bs;
	};
	emp e;
	char empname[40];
	long int recsize;
	fp=fopen("EMP.DAT","rb+");
	if(fp==NULL){
		fp=fopen("EMP.DAT","wb+");
		if(fp==NULL){
			puts("CAN'T OPEN FILE");
			exit(1);
		}
	}
	
	recsize=sizeof(e);

	while(1){
		system("cls");
	//	goto(30,10);
		printf("1.add record");
	//	gotoxy(30,12);
		printf("\n2.list record");
	//	goto(30,14);
		printf("\n3.modify record");
	//	gotoxy(30,16);
		printf("\n4.delete record");
	//	gotoxy(30,18);
		printf("\n0.exit");
	//	gotoxy(30,20);
		printf("your choice");
		fflush(stdin);
		choice = getche();
		switch(choice){
		case '1':
				fseek(fp,0,SEEK_END);
				//fseek(fp, 32, SEEK_CUR)
				
				do{
					printf("\n ENTER NAME AGE AND BASIC SALARY");
					scanf("%s %d %f",e.name, &e.age, &e.bs);
					fwrite(&e,recsize,1,fp);
					printf("DO YOU WAN'T TO ADD ANOTHER RECORD?");
					fflush(stdin);
					another = getche();
				}while(another=='y');
		break;	

		case '2':
			rewind(fp);

			while( fread(&e,recsize,1,fp) == 1 ){

				printf("\n %s %d %f",e.name,e.age,e.bs);
			}

			getch();

		break;

		case '3':
		
		another = 'y';
		while(another == 'y'){
			printf("\n ENTER NAME OF EMPLOY TO MODIFY");
			scanf("%s",empname);
			
			rewind(fp);

			while(  fread(&e,recsize,1,fp)==1  ){

				if( strcmp(e.name,empname) ==0 ){

				printf("ENTER NEW NAME, AGE, BS");
				scanf("%s %d %f",e.name,&e.age,&e.bs);


				fseek(fp, -recsize, SEEK_CUR);
				
				fwrite(&e,recsize,1,fp);
				break;
				}
			}
			printf("\n DO YOU WAN'T TO MODIFY ANOTHER RECORD");
			fflush(stdin);
			another = getche();
		}
		break;
		case '4':
			another = 'y';
			while(another == 'y'){
				printf("ENTER EMPLOY NAME TO DELETE");
				scanf("%s",empname);


				ft =  fopen("TEMP.DAT","wb");
				
				rewind(fp);

				while(fread(&e,recsize,1,fp)==1){
					if(strcmp(e.name,empname)!=0){
						fwrite(&e,recsize,1,ft);
					}
				}
			
			fclose(fp);
			fclose(ft);

			remove("EMP.DAT");
			rename("TEMP.DAT","EMP.DAT");
			fp=fopen("EMP.DAT","rb+");
			printf("DO YOU WAN'T TO DELETE ANOTHER RECORD");
			fflush(stdin);
			another=getche();
			}

		break;
		case '0':
			fclose(fp);
			exit(0);
		}
	
	}
return 0;
}
/*void gotoxy(short int col,short int row){
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = {col,row};
	SetConsoleCursorPosition(hStdout,position);
}*/