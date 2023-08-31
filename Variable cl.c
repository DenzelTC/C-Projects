#include<stdio.h>
void main(){
	int var=15;
	int *ptr=&var;
	printf("The value of x is %d\n",var);
	printf("The address of x is %x\n\n",&var);
	
	printf("The value of the pointer *ptr is %d\n",*ptr);
	printf("The address of the pointer ptr is %x\n\n",ptr);//derefferencing pointer
	
	printf("The value of the pointer *ptr is %d\n",++*ptr);
	printf("The address of the pointer ptr is %x\n\n",++ptr);
	
	printf("The value of the pointer *ptr is %d\n",*ptr);
}
