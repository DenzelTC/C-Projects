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
	char ch;
	
	printf("Enter Number:... \n");
	scanf("%d",&i.Number);
    ch=getchar();
	printf("Enter Name:..\n");
	scanf("%[^\n]s",&i.Name);
	ch=getchar();
	printf("Enter Address:..\n");
	scanf ("%[^\n]s",&i.Address);
	printf("Enter Course:..\n");
	scanf("%s",&i.Course);
	printf("Enter Age:..\n");
	scanf("%d",&i.Age);
	
	printf("Number:...%d\tName:...%s\tAddress:...%s\tCourse:...%s\tAge:...%d",i.Number,i.Name,i.Address,i.Course,i.Age);
	
}
