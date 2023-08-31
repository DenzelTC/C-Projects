#include <stdio.h>

int main(){
    char line[50];
    int i, vowels=0;
	printf("Enter  string: ");
    scanf("%s",&line);

    for(i=0; line[i]!='\0'; i++){
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
    	}
	}
    printf("Number of vowels is %d",vowels);
    getch();
}
