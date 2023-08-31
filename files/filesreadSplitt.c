#include <stdio.h>

void main(){
	FILE *myfile;
	char line[100];
	char studentNum[8];
	char name[50];
	char course[25];
	
	myfile = fopen("myfile.txt", "r");
	if  (myfile == NULL){
		printf("File not found");
	}
	else{
		while(!feof(myfile)){
			fscanf(myfile, "%s", &line);
			if (!feof(myfile)){
				studentNum == strtok(line,",");
				printf("%s\n", line);	
			}
			
		}
	
	
	}
	fclose(myfile);
}
