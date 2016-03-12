# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
void main(void)
{
int a=0;
clrscr();
printf("PRESS 1 FOR DESSENDING TO ASSENDING * :\nPRESS 2 FOR ASSENDING TO DESSENDING * :\n ");
scanf("%d",&a);
if(a==1){
printf("\ndessending to assending * :\n ");
for(int i=5;i>0;i--){
										for(int j=i;j>0;j--){
																				printf("*");

																				}
																				printf("\n");


										}
}
if(a==2){
printf("assending to dessending * :\n ");
int k=1;
for(int i=0;k<5;i++){
										printf("\n");
										for(int j=0;j<k;j++){
																				printf("*");

																				}
																				k++;
																				if(k>5){
																				exit(0);
																				}


										}


}
if(a==3){
				printf("desending left to right :");
				for(int i=5;i>0;i--){
												for(int j=i;j>0;j--){
												printf("*");
												}
												}

				}


getch();
}