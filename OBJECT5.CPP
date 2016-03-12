#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main (void)
{
char name[20];
int i,k;
clrscr();

for(k=0;k>=0;k++)
{
printf("\nEnter Name:");
for(i=0;i<=20;i++)
	{
		scanf("%c",&name[i]);
		if(name[i]==10)
			break;
	}
if(name[0]=='e')
      if(name[1]=='x')
		if(name[2]=='i')
			if(name[3]=='t')
				exit(0);
}
getch();
}