# include <stdio.h>
# include <conio.h>
void main (void)
{
clrscr();
int a[10];
float b=0;

for(int i=0; i<5; i++){

    scanf("%d",&a[i]);
}

for(int j=0;j<5;j++){
      b= b+a[j];
}
printf("average : %.2f", b/5);

//{1,2,3,4,5,6,7,8,9,10} /10


getch();
}
