#include <stdio.h>
void add (){
	int num1,num2,result;
	printf("enter 1st number:...\n	");
	scanf("%d",&num1);
	printf("enter 2nd number:...\n	");
	scanf("%d",&num2);
	result= num1+num2;
	printf("%d+%d=%d",num1,num2,result);
	}
	int  add1 (){
	int num1,num2,result;
	printf("enter 1st number:...\n	");
	scanf("%d",&num1);
	printf("enter 2nd number:...\n	");
	scanf("%d",&num2);
	result= num1+num2;
	printf("%d+%d",num1,num2);
	return result ;
}void main(){
	//add();
	int sum;
	//sum=add1();
	//printf("=%d",sum);
	printf("=%d",add1());
	getch();
}
