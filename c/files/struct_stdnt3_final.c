#include <stdio.h>
#define CLASS  5
struct Students{
	int iD;
	char name[50];
	int age;
	char course[45];
	char address[100];
};


void capture(struct Students *aStudent){
	char ch;
	FILE *fp;
	
	fp = fopen("studentFiles.txt", "w");
	
	int i;
	for(i=0; i<2; i++){
		ch=getchar();
		printf("Name:\t");
		scanf("%[^\n]s", aStudent[i].name);
		fprintf(fp, "Name = %s\n", aStudent[i].name);
		printf("StudentID:\t");
		scanf("%d", &aStudent[i].iD);
		fprintf(fp, "ID = %d\n", aStudent[i].iD);
		printf("Age:\t");
		scanf("%d", &aStudent[i].age);
		fprintf(fp, "Age = %d\n", aStudent[i].age);
		ch=getchar();
		printf("Course:\t");
		scanf("%s", aStudent[i].course);
		fprintf(fp, "Course = %s\n", aStudent[i].course);
		ch=getchar();
		printf("Address:   ");
		scanf("%[^\n]s", aStudent[i].address);
		fprintf(fp, "Address = %s\n\n", aStudent[i].address);
		printf("\n");
	}
	fclose(fp);
}
void display(struct Students aStudent[5]){
	FILE *fp;
	
	fp = fopen("studentFiles.txt", "r");
	int i;
	for(i=0; i<5; i++){
		printf("Name: %s\t", aStudent[i].name);
		
		printf("ID: %d\t", aStudent[i].iD);
		printf("Age: %d\t", aStudent[i].age);
		printf("Course: %s\t", aStudent[i].course);
		printf("Address: %s\t\n", aStudent[i].address);
		printf("\n");
	}
	fclose;
}

void main(){
	struct Students aStudent[5];
	char choice = 'y';
	int option;
	printf("Menu\n\n");
	while(choice == 'Y' || choice == 'y'){
		printf("1. Capture\n");
		printf("2. Display\n");
		printf("3. Exit\n");
		scanf("%d", &option);
		switch(option){
			case 1:
				capture(aStudent);
				scanf("%c", &choice);
				if (choice == 'Y' || choice == 'y'){
					main();
				}
				break;
			case 2:			
				display(aStudent);
				break;
			case 3:
				printf("Press (N/n) to exit system: ");
				break;
			default:
				printf("\nInvalid!.");
				printf("\nReturn to main menu? (Y/N): ");
		}
			printf("\nReturn to main menu? (Y/N): ");
            scanf(" %c",&choice);
	}
	
}
