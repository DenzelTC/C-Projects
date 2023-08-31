#include<stdio.h>
void photocopy(int X,int *Y){
	X*=3;
	*Y*=3;
	printf("value of X and Y in photocopy %d and %d\n",X,*Y);
	
}
