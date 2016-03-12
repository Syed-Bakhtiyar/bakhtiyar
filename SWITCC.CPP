# include <stdio.h>
# include <conio.h>
void main(void)
{
	clrscr();
	int a,b,x;
	char op;
	printf("\nA.ADD\nB.SUB.\nC.MULTIPLY\nD.DIVIDE\n");
	scanf("%c",&op);
	{
	if (op=='a'||op=='A'){
		op='a';
	}else if (op=='b'||op=='B'){
		op='b';
	}else if (op=='c'||op=='C'){
		op='c';
	}else if (op=='d'||op=='D'){
		op='d';
	}else if(op=='e'||op=='E'){
		op='e';
	}
	switch(op)
	{

	case 'a':
		scanf("%d",&a);
		scanf("%d",&b);
		x=a+b;
		printf("%d",x);
	break;


	case'b':
		scanf("%d",&a);
		scanf("%d",&b);
		x=a-b;
		printf("%d",x);
	break;


	case'c':
		scanf("%d",&a);
		scanf("%d",&b);
		x=a*b;
		printf("%d",x);
	break;


	case'd':
		scanf("%d",&a);
		scanf("%d",&b);
			if(b==0){
			printf("infinity");
			}else {
			x=a/b;
			printf("%d",x);
			}
	break;
	default:{
		printf("error");
		}
	}
	}
getch();
}


