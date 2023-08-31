#include <stdio.h>

	struct Students{
		int Number;
		char Name[50];
		char Address[100];
		char Course[30];
		int Age;
	};
void main (){
	struct Students i;
	i.Address;
	i.Age;
	i.Course;
	i.Name;
	i.Number;
	
	printf("Enter Name:..\n");
	gets(i.Name);
	printf("Enter Address:..\n");
	gets(i.Address);	
	printf("Enter Number:... \n");
	scanf("%d",&i.Number);
	printf("Enter Course:..\n");
	scanf("%s",&i.Course);
	printf("Enter Age:..\n");
	scanf("%d",&i.Age);
	
	printf("Number\t\t\tName\t\t\tAddress\t\t\tCourse\t\t\tAge\t\t\n");
	printf(" %d\t\t%s\t\t%s\t\t%s\t\t\t%d",i.Number,i.Name,i.Address,i.Course,i.Age);
	getch();
}
