# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main (void)
{
int a=0;
printf("ENTER A NUMBER: ");
scanf("%d",&a);
if(a%2==0){
	printf("EVEN NUMBER %d",a);
	getch();

}if(a%2!=0){
	    printf("%d",a);
	    printf("%d",a*3+1);
	    printf("%d",14);
	    getch();
}if(a<1){
	 printf("ERROR");
	 getch();

}
exit(0);
getch();
}