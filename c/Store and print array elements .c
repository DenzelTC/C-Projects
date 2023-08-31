#include <stdio.h>  
void  main(){  
    int i; 
    int number[10];  
    printf("\t\tStore and Print the elements of an array:\n");
    printf("Enter the elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element is %d:",i+1);
        scanf("%d", &number[i]);  
    }  
    printf("\nElements in array are: ");  
    for(i=0; i<10;i++)
    {  
        printf("%d  ",number[i]);  
    } 
 getch();	
}

