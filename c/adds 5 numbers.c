#include <stdio.h>
void main(){
	int num1,num2,num3,num4,num5,result=0;
	printf("			Adds 5 numbers");
	printf("\nEnter numbers\n");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	//result=num1+num2+num3+num4+num5;
	result+=num1;
	result+=num2;
	result+=num3;
	result+=num4;
	result+=num5;
	printf("Sum is %d",result);
	getch();
}
