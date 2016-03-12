# include<stdio.h>
# include <conio.h>
void main (void)
{
	float a,b;
	char op;
		{
		printf("\n ENTER ANY TWO DIGITS");
		printf("\n '+'-add");
		printf("\n '-'-sub");
		printf("\n '*'-mul");
		printf("\n '/'-div");
		scanf("%c", &op);
		printf("enter first no");
		scanf("%f", &a);
		printf("enter second no");
		scanf("%f", &b);
		switch(op)
			{
		case '+':
			printf("=%f", a+b);
			break;
		case '-':
			printf("=%f", a-b);
			break;
		case '*':
			printf("=%f", a*b);
			break;
		case '/':
			printf("=%f", a/b);
			break;
			default:
			  printf("unknown operator");
			}
			printf("\n\n");
		}
}