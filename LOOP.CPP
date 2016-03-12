# include <stdio.h>
# include <conio.h>
void main (void)
{
	int N,m;
	int i;
	char op;
	char ch;
	printf("while Loop Calculator");
	scanf("%d", &N);
	scanf("%d", &m);
	do
{

	printf("A LOOP CALCULATOR:");
	printf("\n 1=add");
	printf("\n 2=sub");
	printf("\n 3=mul");
	printf("\n 4-div");
	printf("\n ENTER YOUR CHOICE:");
	scanf("%c", &op);
	printf("ENTER FIRST NO:");
	scanf("%d", &i);
	printf("ENTER SECOND NO:");
	scanf("%d", &m);
	if ('1'==op)

{
	N=i+m;
	printf("%d+%d=%d", i,m,N);
	i++;
}
	if ('2'==op)
{
	N=i-m;
	printf("%d-%d=%d", i,m,N);
}
	if ('3'==op)
{
	N=i*m;
	printf("%d*%d=%d", i,m,N);
}
	if ('4'==op)
{
	N=i/m;
	printf("%d/%d=%d", i,m,N);
}
}
	ch==getcher();
} 	while(ch==N,m);
