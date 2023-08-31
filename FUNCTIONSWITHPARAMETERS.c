#include <stdio.h>
int  add (int X,int Y){
	int result= X+Y;
	printf("%d+%d",X,Y);
	return result ;
}
void main(){
	int num1,num2;
	printf("enter 1st number:...\n	");
	scanf("%d",&num1);
	printf("enter 2nd number:...\n	");
	scanf("%d",&num2);
	printf("=%d\n",add(num1,num2));
	printf("=%d\n",add(4,5));
	getch();
}
