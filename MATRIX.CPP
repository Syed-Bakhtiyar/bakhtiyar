# include<stdio.h>
# include<conio.h>
void main (void)
{
	int A[2][2];
	int B[2][2];
	int C[2][2];
	int row,cols;
	clrscr();
	printf("\n ENTER MATRIX A");
	for(row=0; row<2; row++)
{
	for(cols=0; cols<2; cols++)
	{
		printf("ENTER [%d][%d]", row,cols);
		scanf("%d", &A[row][cols]);
	}
}
	printf("\n ENTER MATRIX B");
	for(row=0; row<2; row++)
{
	for(cols=0; cols<2; cols++)
	{
		printf("ENTER [%d][%d]", row,cols);
		scanf("%d", &B[row][cols]);
	}
}
	for(row=0; row<2; row++)
{
		printf("\n >ARRAY< ADD MATRIX A AND B");
		C[row][cols]=A[row][cols]+B[row][cols];
}
	for(row=0; row<2; row++)
{
	for(cols=0; cols<2; cols++)
{
		printf("\n ENTER [%d]+[%d]=%d", row,cols, C[row][cols]);
}
}
	getch();
	gotoxy(row,cols);
}

