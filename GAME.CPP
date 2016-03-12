# include <stdio.h>
# include <conio.h>
void main (void)
{
again:
clrscr();
gotoxy (65,23);
puts("SYED BAKHTIYAR");
int score=0,limit = 4;
int a=0,b=0;
int c[10][10]={{1,0,1,0,1,0,1,0,1,0},
							 {0,1,0,1,0,1,0,1,0,1},
							 {1,0,1,0,1,0,1,0,1,0},
							 {0,1,0,1,0,1,0,1,0,1},
							 {1,0,1,0,1,0,1,0,1,0},
							 {0,1,0,1,0,1,0,1,0,1},
							 {1,0,1,0,1,0,1,0,1,0},
							 {0,1,0,1,0,1,0,1,0,1},
							 {1,0,1,0,1,0,1,0,1,0},
							 {0,1,0,1,0,1,0,1,0,1}};





gotoxy (1,13);
score=0;
printf("%d",score);
gotoxy (1,17);
printf("                       ");
gotoxy (1,1);
puts("PLAY MINESWEEPER:\n");
for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
		printf("*");
	}
	printf("\n");
}
start:
gotoxy (1,13);

for(i=0; i< (80*limit); i++){
	printf(" ");
}

gotoxy(1,13);

printf("\nSCORE: %d",score);
printf("\nPLAY: ");
scanf("%d,%d",&a,&b); // 1,4
if(a>=1 && a<=10 && b>=1 && b<=10){
	limit = 4;
	if(c[a-1][b-1]==0){

		printf("GAME OVER:");
		gotoxy (1,3);

		for(int j=0;j<10;j++){
	for(int i=0;i<10;i++){
		if(c[i][j]==0){
			printf("%d",c[i][j]);
		}else{
			printf("*");
		}
	}
printf("\n");

}
gotoxy (1,17);
printf("PRESS s TO START AGAIN: ");
if(getch()=='s'){
	goto again;
								 }
								 }else{
								score=score+1;

								gotoxy(a,b+2);

								printf("\xDB");
								c[a-1][b-1]=0;
								goto start;
								}


											}else{
											printf("you entered a wrong value");
											limit = 3;
											goto start;
											}
getch();
}
