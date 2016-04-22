# include<stdio.h>
# include<conio.h>
//void func(int *);
int main(void){
int *a;
int b[10][5]={{0,1,2,3,4},
	       {0,1,2,3,4},
	       {0,1,2,3,4},
	       {0,1,2,3,4},
	       {0,1,2,3,4},
	       {0,1,2,3,4},
	       {0,1,2,3,4},
	       {0,1,2,3,4},
	       {0,1,2,3,4},
	       {0,1,2,3,4}};

//func(b);
a=b;

getch();
return 0;
}
//void func(int *a){
//printf("\n");
//	for(int i=0;i<10;i++){
//		for(int j=0;j<5;j++){
//			printf("%d",*a(i+j));
//
//		}
//		printf("\n");
//
//	}
//}
