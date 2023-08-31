#include <stdio.h>
void main(){
	int month;
	printf("		Month info\n\n");
	printf("Enter month number:...");
	scanf("%d",&month);
	switch (month)
	{
		case 1:
		printf("\nJanuary - 31 Days");
		break;
		
		case 2:
		printf("\nFebruary - 28 Days or 29 Days in a leap year ");
		break;
		
		case 3:
		printf("\nMarch - 31 Days");
		break;
		
		case 4:
		printf("\nApril - 30 Days");
		break;
		case 5:
		printf("\nMay - 31 Days");
		break;
		case 6:
		printf("\nJune - 30 Days");
		break;
		
		case 7:
		printf("\nJuly - 31 Days");
		break;
		
		case 8:
		printf("\nAugust - 31 Days");
		break;
		
		case 9:
		printf("\nSeptember - 30 Days");
		break;
		
		case 10:
		printf("\nOctober - 31 Days");
		break;
		
		case 11:
		printf("\nNovember - 30 Days");
		break;
		
		case 12:
		printf("\nDecember - 31 Days");
		break;
	}
	getch();
}
