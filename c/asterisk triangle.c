#include <stdio.h>
void main(){
   int a,b,rows;
   printf("Input number of rows ");
   scanf("%d",&rows);
   for(a=1;a<=rows;a++)
   {
		for (b=1; b<=a; b++)
	   printf("*");
	printf("\n");
   }
getch();
}

