#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
int i, arr[10],pos=0,neg=0,min,max;

printf("Enter 10 Digits:\n");
for(i=0;i<10;i++){
    scanf("\n%d",&arr[i]);
}
for(i=0;i<10;i++){
if(arr[i]>0){
    pos +=arr[i];
}
else if(arr[i]<0){
    neg +=arr[i];
}
}
for(i=0;i<10;i++){
   if (i==0){
     min=arr[i];
     max=arr[i];
   }
   else{
     if (arr[i]<min)
        min=arr[i];
     if (arr[i]>max)
     max=arr[i];
   }
}

printf("\nSum of Positive integers: %d",pos);
printf("\nSum of Negative integers: %d",neg);
printf("\nMinimum value is: %d",min);
printf("\nMaximum value is: %d",max);
getch();
}
