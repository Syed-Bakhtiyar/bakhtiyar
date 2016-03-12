# include <stdio.h>
# include<conio.h>
void main (void)
{
clrscr();
puts("ADDITION MATRIX: ");
int i[4]={0,0,0,0};
int j[4]={0,0,0,0};
int k[4];
flushall();
scanf("%d\n%d",&i[0],&j[0]);
k[0]=i[0]+j[0];
printf("%d\n\n",k[0]);
flushall;
scanf("%d\n%d",&i[1],&j[1]);
k[1]=i[1]+j[1];
printf("%d\n\n",k[1]);
flushall;
scanf("%d\n%d",&i[2],&j[2]);
k[2]=i[2]+j[2];
printf("%d\n\n",k[2]);
flushall;
scanf("%d\n%d",&i[3],&j[3]);
k[3]=i[3]+j[3];
printf("%d\n\n",k[3]);
getch();
}


