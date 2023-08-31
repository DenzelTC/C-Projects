#include <stdio.h>

void main(){
	int num;
	FILE *myfile;
	
	myfile = fopen("myfile.txt", "w");
	
	if (myfile ==NULL){
		printf("Error!");
		exit(1);
	}
	
	printf("Enter number: ");
	scanf("\%d", &num);
	
	fprintf(myfile, "%d", num);
	
	fclose(myfile);
}
