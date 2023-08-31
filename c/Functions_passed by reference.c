#include "photocopy.h"
void main(){
int x=2;
int y=5;
printf("the value of x and y before calling photocopy function %d and %d\n",x,y);
photocopy(x,&y);
printf("value of x and y after calling photocopy  %d and %d",x,y);
getch();
}


