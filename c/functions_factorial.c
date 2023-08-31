#include<stdio.h>
int factorial(int n){
	if (n==1){
	return 1;
	}
 	return n * factorial (n-1);
}

  
void main(){
  int ;
  printf("5! = %d ",factorial(5));
  
  getch();
}
