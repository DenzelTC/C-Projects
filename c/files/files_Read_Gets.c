#include <stdio.h>

void main(){
	FILE *myfile;
	char word[100];
	
	myfile = fopen("myfiles.txt", "r");
		if  (myfile == NULL){
			printf("File not found");
		}
		else{
			while(!feof(myfile)){
				fgets(word, 100, myfile);
				if (!feof(myfile)){
					printf("%s\n", word);
				}
				
			}
		}
	

	
	fclose(myfile);
}
