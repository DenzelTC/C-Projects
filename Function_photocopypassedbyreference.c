#include<stdio.h>
void photocopy(int X,int *Y){
	X*=3;
	*Y*=3;
	printf("value of X and Y in photocopy %d and %d\n",X,*Y);
	
}
void main(){
int x=2;
int y=5;
printf("the value of x and y before calling photocopy function %d and %d\n",x,y);
photocopy(x,&y);
printf("value of x and y after calling photocopy  %d and %d",x,y);
getch();
}


