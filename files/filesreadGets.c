#include <stdio.h>

void main(){
	FILE *myfile;
	char word[20];
	
	myfile = fopen("myfiles.txt", "r");
	
	fgets(word, 20, myfile);
	
	printf("%s", word);
	
	fclose(myfile);
}
