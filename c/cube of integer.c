#include <stdio.h>
void main()
 {
    int i,ctr;
    printf("Enter number: ");
    scanf("%d", &ctr);
    for(i=1;i<=ctr;i++)
    {
	 printf("Number entered is:... %d and cube of %d is :%d \n",i,i, (i*i*i));     
    }
 }

