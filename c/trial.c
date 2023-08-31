#include<stdio.h>
void main(){
	const int SUBJECTS=5;
	const int NAMES=8;
	int matrix [SUBJECTS][NAMES];
	int i;
	int j;
	int temp,l;
	char Paddington=matrix [0][1],Keith=matrix [1][1],James=matrix [2][1],Clyde=matrix [3][1],Delight=matrix [4][1],Denzel[5][1],Ian=matrix [6][1],Jonah=matrix [7][1];
	printf("\t\t\tStudent Marks and Position ");
		printf("\nEnter values :\n");
	for(i=0;i<SUBJECTS;i++){
		for(j=0;j<NAMES;j++){
		scanf("%d",&matrix[i][j]);
		}
	
	}
		for(i=0;i<SUBJECTS;i++){
		for(j=0;j<NAMES;j++){
		printf("\t%d\t",matrix[i][j]);
		}
		printf("\n");
	}	
getch();
}
