#include<stdio.h>
int main(){
  int a,f=1,num;
  printf("Enter number:.... ");
  scanf("%d",&num);
  for(a=1;a<=num;a++)
  f=f*a;
  printf("\n\nFactorial of %d is: %d",num,f);
  getch();
}
