#include <stdio.h>

void main(){
	FILE *myfile;
	char word[1000];
	int num;
	myfile = fopen("myfile.txt", "a");
	
	printf("Enter student number: ");
	scanf("%d\n", &word);
	
	fprintf(myfile, "%s\n", word);
	fclose(myfile);
}
