# include <stdio.h>
# include<conio.h>
void main (void)
{
clrscr();
int a,b,score=0;

int c[5][5]={{0,1,0,1,0},
	     {1,0,1,0,1},
	     {0,1,0,1,0},
	     {1,0,1,0,1},
	     {0,1,0,1,0}
			};



for(int i=0;i<5;i++){

	for(int j=0; j<5 ; j++){

		printf("*");
	}
	printf("\n");
}
start:
printf("\n\nSCORE : %d",score);

printf("\nPLAY : ");

scanf("%d,%d",&a,&b);
if(c[a-1][b-1]==0){
		printf("GAME OVER :");

}else{

		score=score+1;
		gotoxy(1,8);
		for(i=0;i<80;i++){
		for(int j=0;j<2;j++){
			printf(" ");
		}
		}
		gotoxy(1,6);
			goto start;
			}
getch();
}


