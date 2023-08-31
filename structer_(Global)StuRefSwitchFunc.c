#include <stdio.h>

struct Students{
	int ID;
	char name[50];
	int age;
	char address[100];
	char course[30];
	
};

void capture(struct Students *aStudent){
		int i;
	
	for(i=0; i<5; i++)
	{
		aStudent[i].ID = i+1;
		
		printf("\nFor Student number %d:\n",aStudent[i].ID);
		
		printf("Enter Student Name: ");
		scanf ("%s", aStudent[i].name);
		
		printf("Enter Student Age: ");
		scanf ("%d", &aStudent[i].age);
		
		printf("Enter Student Address: ");
		scanf ("%s", aStudent[i].address);
		
		printf("Enter Course: ");
		scanf ("%s", aStudent[i].course);
		
	} //end for(i=0; i<5; i++)
}	//end void capture

void display(struct Students aStudent[5]){
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("\nStudent %d:\n",aStudent[i].ID);
		printf("Name: %s\t\tAge: %d\t\tAddress: %s\t\tCourse: %s",aStudent[i].name, aStudent[i].age, aStudent[i].address, aStudent[i].course);
		
		printf("\n");
	}	//end for(i=0; i<5; i++)
}	//end void display 

void main()
{
	struct Students aStudent[5];
	int option;
	char choice = 'Y';
	
	printf("\t...Welcome to the Student Data System...\n\n");
	
	while(choice == 'Y' || choice == 'y'){
		printf("\nPlease select option: \n1. Input Student Data\n2. View Student Data\n3. Exit\n\n");
		scanf("%d",&option);
	
		switch(option){
			case 1:
				printf("Enter Student Details:\n");
				capture(aStudent);
				printf("Return to main menu? (Y/N) :");
            	scanf(" %c",&choice);
				break;
			case 2:
				printf("\nDisplaying Information:\n");
				display(aStudent);
				printf("Return to main menu? (Y/N) :");
            	scanf(" %c",choice);
				break;
			case 3:
				printf("Press (N/n) to exit system: ");
            	scanf(" %c",&choice);
				break;
			default:
				printf("\nSorry, your option is not valid.");
				printf("\nReturn to main menu? (Y/N) :");
            	scanf(" %c",&choice);
		} //end switch
	}	//end while 
	
}	//end void main()
