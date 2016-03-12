# include<stdio.h>
# include<conio.h>
void main (void)
{
	clrscr();
	int ft, ot, fh, oh;
	unsigned int c;
	printf("\n ENTER AMOUNT:");
	printf("\n ft-5000");
	printf("\n ot-1000");
	printf("\n fh-500");
	printf("\n oh-100");
	scanf("%u", &c);
	if (c%100!=0||c>50000)
	{
	printf("\n*** AMOUNT TRASACTION***");
	}
	else
	{
	ft=c/5000;
	c=c%5000;
	ot=c/1000;
	c=c%1000;
	fh=c/500;
	c=c%500;
	oh=c/100;
	c=c%100;
	printf("\n%dnote of 5000 \n%dnote of 1000 \n%dnote of 500 \n%dnote of 100", ft,ot,fh,oh);
	}
	getch();
	}
