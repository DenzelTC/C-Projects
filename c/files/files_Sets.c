#include <stdio.h>

void main(){
	FILE *myfile;
	char word[100];
	myfile = fopen("myfiles.txt", "a");
	
	gets(word);
	
	fputs(word , myfile);
	fclose(myfile);
}
