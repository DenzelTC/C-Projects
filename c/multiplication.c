#include <stdio.h>
void main (){
	int num1,num2,result;
	printf("Enter 1st number:....\n	");
	scanf("%d",&num1);
	printf("enter 2nd number:....\n	");
	scanf("%d",&num2);
	result=num1*num2;
	printf("%d*%d=%d",num1,num2,result);
	getch();
}
