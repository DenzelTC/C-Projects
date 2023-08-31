#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter number...: ");
    scanf("%d",&n);

    for(i=2;i<=2; i++)
    {
        if(n%i==0)
        
           printf("%d is not a prime number.",n);
            
        
        else if (n%i>=1)
        printf("%d is a prime number.",n);
    }

    getch();
}
