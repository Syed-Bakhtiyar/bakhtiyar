#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
void main (void)
{
	clrscr();
	int m=0,n=0,BAKHTIYAR=0,K;
	printf ("Now start\n***BAKHTIYAR***\n Enter any two digits");
	printf("\n which operator do you wan't to done there numbers?");
	scanf("%d",&BAKHTIYAR);
	if(BAKHTIYAR==1){
	scanf("%d",&m);
	scanf("%d",&n);
	printf("%d=%d",K,m+n);
	getch();
	}
	else if( BAKHTIYAR==2 ){
	scanf ("%d%d",&m,&n);
	K=m-n;
	printf("%d=%d-%d",K,m,n);
	}
	else if( BAKHTIYAR==3 )    {
	scanf ("%d%d",&m,&n);
	K=m/n;
	printf("%d=%d/%d",K,m,n);
	}
	else if( BAKHTIYAR==4 )      {
	scanf ("%d%d",&m,&n);
	K=m*n;
	printf("%d=%d*%d",K,m,n);
	}
	else{
	printf ("\nSorry you have entered an invalid operator");
	getch();
	exit (0);
	}
}