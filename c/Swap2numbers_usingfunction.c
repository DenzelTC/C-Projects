#include<stdio.h>
void swap(int *i,int *j)
{

    int temp;
    temp = *i;
    *i=*j;    
    *j=temp;   
}

void swap(int *i,int *j);
int main()
{

    int num1,num2;
	printf("\t\tSwap two numbers using functions\n");
    printf("Input the 2 numbers : ");
    scanf("%d%d",&num1,&num2);

    printf("Before swapping: num1 = %d, num2 = %d ",num1,num2);
    
    swap(&num1,&num2);
    printf("\nAfter swapping: num1 = %d, num2 = %d \n\n",num1,num2);
    return 0;
}



