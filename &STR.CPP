# include<stdio.h>
# include<iostream.h>
# include<stdlib.h>
struct name{
int a;
int b;
float f;
char ch;
};
void main(void){
system("CLS");
name c1,c2,c3[2];
printf("%d\n%d\n%d\n%d",&c1.a,&c1.b,&c1.f,&c1.ch);
printf("\n%d\n%d\n%d\n%d",&c2.a,&c2.b,&c2.f,&c2.ch);
printf("\n\narray\n%d\n%d\n%d\n%d\n",&c3[0].a,&c3[0].b,&c3[0].f,&c3[0].ch);
printf("%d\n%d\n%d\n%d",&c3[1].a,&c3[1].b,&c3[1].f,&c3[1].ch);
system("PAUSE");
}