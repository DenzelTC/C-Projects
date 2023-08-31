#include<stdio.h>
void main(){
	char students [8][20]={"PD","Clyde","Delight","Keith","Denzel","James","Ian","Jonah"};;
	char subjects [5][8]={"PPP","C","Cpp","V.B Net","Java"};
	int marks [5][8]={
						{41,14,54,97,79,91,92,43},
						{38,19,99,50,47,54,31,88},
						{54,11,56,66,74,91,92,43},
						{30,18,63,72,87,74,88,65},
						{73,15,74,88,65,84,81,54}
						
																														
				 	 };
						
	int i,j,k;
	int position,highest;
	char topstudent[5][20];
	printf("\t\t\tStudent Marks and Position\n\n");

	for(i=0;i<8;i++){
		printf("\t%s",students[i]);
	}printf("\n");	
	for(i=0;i<5;i++){
		printf("%s\t",subjects[i]);
		for(j=0;j<8;j++){
		printf("%d\t",marks[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		highest=marks[i][0];
		for(j=0;j<8;j++){
		if(marks[i][j]>highest){
			highest=marks[i][j];
			position=i;
		}
		}
		printf("\n\n%s has the highest mark %d for subject %s\n",students[position],highest,subjects[i]);
	}
getch();
}
