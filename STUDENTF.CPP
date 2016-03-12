#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct student
{
	int rno;
	char name[20];
	int marks;
};

void fswrite(student *stud, FILE *ostream);
void fsread();
void seekNread(int rn);

void main(void)
{
	clrscr();
	student s1;
	printf("enter Roll no:");
	scanf("%d",&s1.rno);
	flushall();
	printf("enter Name");
	scanf("%[^\n]", s1.name);

	flushall();
	printf("enter marks");
	scanf("%d", &s1.marks);
	flushall();
	printf("\nread from console: %d-%s-%d",s1.rno, s1.name, s1.marks);

	FILE *F;
	if ((F = fopen("d:\\duplicat.txt", "a+b")) == NULL)
		fprintf(stderr, "Cannot open input file.\n");

	fswrite(&s1,F);
	fclose(F);

	fsread();

	int roll;
	printf("\nEnter roll number to find student record: ");
	scanf("%d",&roll);

	seekNread(roll);

}


void fswrite(student *stud, FILE *ostream)
{
       //	FILE *ostream;

    /*	printf("\nIn Write routine: %d-%s-%d",stud->rno, stud->name, stud->marks);

	if ((ostream = fopen("d:\\duplicat.txt", "wb")) == NULL)
	{
		   fprintf(stderr, "Cannot open input file.\n");
	}
	   */
	fwrite(&stud->rno, sizeof(int), 1, ostream); /* write struct s to file */
	fwrite(&stud->name, 20*sizeof(char), 1, ostream);
	fwrite(&stud->marks, sizeof(int), 1, ostream);

//while (!feof(in))
//   fputc(fgetc(in), out);

       //	fclose(ostream);

}

void fsread()
{
	FILE *istream;

	student st;
	if ((istream = fopen("d:\\duplicat.txt", "rb")) == NULL)
	{
		   fprintf(stderr, "Cannot open input file.\n");
	}

       //	printf("Fseek call %d",fseek(istream, 0, 0));

	while(!feof(istream))
	{
		fread(&st, sizeof(student), 1, istream); /* write struct s to file */
		printf("\nRead from File: %d-%s-%d",st.rno, st.name, st.marks);
	}


//while (!feof(in))
//   fputc(fgetc(in), out);

	fclose(istream);

}

void seekNread(int rn)
{
	student stud;
	FILE *istream;
	long int k;
	fpos_t fpos;

	if ((istream = fopen("d:\\duplicat.txt", "rb")) == NULL)
	{
		   fprintf(stderr, "Cannot open input file.\n");
	}

	fseek(istream, 0L, SEEK_SET);

	while(!feof(istream))
	{


		fread(&stud, sizeof(student), 1, istream); /* write struct s to file */
	  /*	if(stud.rno==rn)
		{
			k = ftell(istream);
			printf("\n%ld",k);
			if(k!=0)
			{
				fpos = k - sizeof(student);
				fsetpos(istream, &fpos);
				break;
			}
		} */
		if(stud.rno==rn)
		{
			printf("\nRead from File as desired: %d-%s-%d",stud.rno, stud.name, stud.marks);
			break;
		}
	}

	fclose(istream);

}