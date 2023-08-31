#include <stdio.h>

void main(){
	FILE *myfile;
	char word[1000];
	
	myfile = fopen("myfile.txt", "r");
	if  (myfile == NULL){
		printf("File not found");
	}
	else{
		while(!feof(myfile)){
			fscanf(myfile, "%s", &word);
			if (!feof(myfile)){
				printf("%s\n", word);	
			}
			
		}
	
	
	}
	fclose(myfile);
}
