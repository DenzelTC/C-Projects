#include <stdio.h>
void main (){
	int number=1;//initialisation
	char response='y';
	printf("\t\t\tLoops\n\n");
	while (response=='y'){//condition 
		printf("%d\n",number);
		number++;
		printf("do you want to display the next number?(y/n)");
		scanf(response);//change/sentinel
	}
	getch();
}
