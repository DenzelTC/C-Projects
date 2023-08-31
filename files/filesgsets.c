#include <stdio.h>

void main(){
	FILE *myfile;
	char word[10];
	myfile = fopen("myfiles.txt", "w");
	
	//printf("Enter number: ");
	gets(word);
	
	fputs(word , myfile);
	fclose(myfile);
}
