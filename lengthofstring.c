#include <stdio.h>
int main()
{
    char s[500], i;
    int length=0;

    printf("Enter string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++){
    	length++;
	}

    printf("Length of string: %d", length);
    getch();
}
