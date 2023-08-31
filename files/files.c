#include <stdio.h>

void main(){
	FILE *myfile;
	char word[10];
	myfile = fopen("myfile.txt", "a");
	
	//printf("Enter number: ");
	scanf("%s\n", &word);
	
	fprintf(myfile, "%s\n", word);
	fclose(myfile);
}
