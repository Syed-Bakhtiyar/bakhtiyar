# include <stdio.h>
# include <conio.h>
# include <string.h>
void main (void)
{
start:
int option,option1;
char a = [];
char b = [];

char c;

clrscr();

printf("\n1. temprature\n");
printf("2. length\n");
printf("3. weight\n");
printf("4. area\n");
printf("4. volume\n");
printf("5. currency\n");
printf("6. exit");

printf("enter your choice:");
scanf("%d",&option);

//decide what to do

if(option == 1){

//print a menu

   printf("\n\n1. forenhight >> celcius \n");
   printf("2. Kelvin >> farhenhight \n");
   printf("3. kelvin >> celcius \n\n");
   printf("4. for back\n");

   printf("choose a number: ");
   scanf("%d",&option1);


   if(option1 == 1){

     printf("forhenhight >> celcius\n");
     printf("========================\n\n");

     printf("enter forhinhight: ");


     scanf("%[^\n]",&a);

     b = a-32*5/9; // Brackets O Divide Mul Add Sub

     printf("celcius: %.2f",b);



     }

     if(option1 == 2){

	printf("kelvin >> farhenhight\n");
	printf("======================\n\n");

	printf("enter kelvin: ");
	scanf("%f",&a);

	 b = a+a;
	 printf("kelvin = %.2f",b);

     }


     if(option1 == 3){

	 //rtyw

     }
     if(option1 == 4){

	   goto start;

     };
  }

if(option == 2){
   //print a menu
   printf("\n\n1. mile >> km\n");
   printf("2. yard >> metre\n");
   printf("3. foot >> metre\n");
   printf("4. foot >> cm\n");
   printf("5. inch >> cm\n");

  }

















getch();

}


