#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void formatLine(char *s, char *d, char *sp, char *m, FILE *f);

int main(int argc, char *argv[])
{
   FILE *in, *out;
   unsigned long int serial;
   serial = 1;

   in = fopen(argv[1], "rb");
   out = fopen(argv[2], "wb");

	char dot='.';
	char space=' ';
	char msg[3000];
	char string[10];
	int strlength;
   while (!feof(in))
   {
	ultoa(serial, string, 10);
//	strlength = strlen(msg);
//	printf("\n%d",strlength);
	fgets(msg, 3000, in);                   //get line
	if(!feof(in))
	{
	      /*	fwrite(string, strlen(string), 1, out);  //put serial number
		fwrite(&dot, sizeof(char), 1, out);      //put do
		fwrite(&space, sizeof(char), 1, out);    //put space
		fputs(msg,out);                          //read line
				 */
		formatLine(string, &dot, &space, msg, out);

	}
	serial++;
   }
   fclose(in);
   fclose(out);
   return 0;
}

void formatLine(char *s, char *d, char *sp, char *m, FILE *f)
{
	fwrite(s, strlen(s), 1, f);  //put serial number
	fwrite(d, sizeof(char), 1, f);      //put do
	fwrite(sp, sizeof(char), 1, f);    //put space
	fputs(m,f);
}

