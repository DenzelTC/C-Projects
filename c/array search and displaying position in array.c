#include <stdio.h>
void main(){
	int search,i,found=0;
	int number[6];
	int position;
	int counter=0;
	printf("\t\t\tSearch for number in an array");
	for (i=0;i<6;i++)
	{
		printf("\nEnter number for position%d\n",i+1);
		scanf("%d",&number[i]);
	}
		printf("Enter number to be searched\n");
	scanf("%d",&search);
	for(i=0;i<6;i++)
	{
		if(number[i]==search){
			counter++;
			printf("%d was found on position %d,",search,i+1);
			}
	}
	printf("%d was found %d time/s ",search,counter);
	getch();
}
