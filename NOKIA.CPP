# include<stdio.h>
# include<conio.h>
void main(void)
{
clrscr();
int a=0,b=0; float c=0;
printf("PRESS 1 for last 5 conversion\nPRESS 2 for temprature\n");
scanf("%d",&a);
if(a==1){
	printf("LAST 5 CONVERSION:\n");
	puts("\n\t\tPRESS 1 FOR CUBIC INCH AND CUBICCENTEMETER\n\t\tPRESS 2 FOR CELCIUS AND FARENHEIGHT\n\t\tPRESS 3 FOR KILOGRAMM AND POUND\n\t\tPRESS 4 FOR CONVERTER:");
	scanf("%d",&b);
	if(b==1){
		puts("\tCUBIC INCH CONVERT \n\tINTO CUBIC CENTEMETRE AND CUBIC CENTEMETER CONVERT INTO CUBIC INCH: ");
		puts("\n\t\tCUBIC INCH CONVERT INTO CUBIC CENTIMETER\n");
		scanf("%f",&c);
		printf("\n\t%f\n",c);
		printf("\n\t%f cubic inch=%f cubic centemetre\n",c,c*(16.387));
		printf("\n\tpress 'y' to CUBIC CENTIMETER CONVERT INTO CUBIC INCH");
		if(getch()=='y'){
		printf("\n\t\tCUBIC CENTIMETER CONVERT INTO CUBIC INCH\n");
		scanf("%f",c);
		printf("\n\t\t%f",c);
		printf("\n\t\t%f cubic centemeter=%f cubic inch",c,c/(16.387));
		}
		}
	if(b==2){
		puts("\t\tCELSIUS CONVERT INTO FARENHEIGHT AND FARENHEIGHT CONVERT INTO CELCIUS\n");
		scanf("%f",&c);
		printf("\n%f\n",c);
		printf("\n\t\t %f CELIUS=%f farenheight\n",c,c*9/5+31);
		if (getch()=='y'){
		puts("\n\t\tFARENHEIGHT CONVERT INTO CELCIUS\n");
		scanf("%f",&c);
		printf("\n\t\t%f",c);
		printf("%f farenheight=%f celcius",c,c-32*5/9);
		}
		}
	if(b==3){
		puts("\tKILOGRAM CONVERT INTO POUND");
		scanf("%d",&c);
		printf("%d\n",c);
		printf("%d KILOGRAMM=%f POUND",c,c*(2.2045));
		}
	if(b==4){
		puts("CONVERTER");
		scanf("%d",&c);
		printf("%d\n",c);
		printf("%d=%d",c,c);
		}
	}
if(a==2){
	puts("TEMPRATURE: ");
	printf("\nPRESS 1 FOR CELSIUS CONVERT INTO FARENHEIGHT\nPRESS 2 FOR FARENHEIGHT CONVERT INTO KALVIN\nPRESS 3 FOR CELSIUS CONVERT INTO KELVIN\n");
	scanf("%d",&b);
	if(b==1){
		printf("celsius convert into farenheight\n");
		scanf("%d",&c);
		printf("%d\n",c);
		printf("%d CELSIUS = %.2f FARENHEIGHT",c,c*(33.8));
		}
	if(b==2){
		printf("FARENHEIGHT CONVERT INTO KELVIN\n");
		scanf("%d",&c);
		printf("%d\n",c);
		printf("%d FARENHEIGHT = %f KELVIN",c,c*(255.9277));
		}
	if(b==3){
		printf("CELSIUS CONVERT INTO KELVIN\n");
		scanf("%d",&c);
		printf("%d\n",c);
		printf("%d CELSIUS = %f KELVIN",c,c*(274.15));
		}else{
		     printf("YOUR TYPING VALUE IS NOT MATCHED");
		     }
	}

getch();
}