#include <stdio.h>

	struct Students{
		int Number;
		char Name[50];
		char Address[100];
		char Course[30];
		int Age;
	};
void display(struct Students abc[5]){
	int J;
	FILE *myfile;
	myfile=fopen("myfile.txt","w");
for(J=0;J<5;J++){
	printf("student%d\n",abc[J].Number);
	printf("name,%s\t\t,address,%s\t\t,Course,%s\t\tage,%d",abc[J].Name,abc[J].Address,abc[J].Course,abc[J].Age);
	printf("\n");
}
}


void capture(struct Students *abc){
	int i,J;
	for(J=1;J<5;J++){
		abc[J].Number=J+1;
		printf("student%d\n\n",abc[i].Number);
			printf("Enter Name:..\n");
			scanf("%s",&abc[J].Name);
			printf("Enter Address:..\n");
			scanf("%s",&abc[J].Address);	
			
			printf("Enter Course:..\n");
			scanf("%s",&abc[J].Course);
			printf("Enter Age:..\n");
			scanf("%d",&abc[J].Age);
			}
}

void main (){
	struct Students abc[5];
	int selection;
	char choice='y';
	while(choice == 'Y' || choice == 'y'){
		printf("\t\t\tStudent Records\n\n");
	printf("1.Capture\n");
	printf("2.Display\n");
	printf("3.Quit\n");
	scanf("%d",&selection);
	
	
	switch (selection){
	
	
			case 1:
				capture(abc);
				printf("Return to main menu? (Y/N) :");
            	scanf(" %c",&choice);
			break;
			
			case 2:
				
				printf("Display in Detail:\n");
				display(abc);
				printf("Return to main menu? (Y/N) :");
            	scanf(" %c",&choice);
			break;
		
			
			case 3:
				break;
				
		}

}
	
	getch();
    }
