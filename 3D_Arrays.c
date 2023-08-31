#include<stdio.h>
void main(){
	const int ROWS=3;
	const int COLUMNS=2;
	int matrix [ROWS][COLUMNS];
	int i;
	int j;
	int largest,smallest;
	printf("\t\t\t3 dimensional arrays\n\n");
	printf("Enter values :\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
		scanf("%d",&matrix[i][j]);
		}
	
	}
	printf("\t\tMatrix\n\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
		printf("\t%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	smallest=largest=matrix[0][0];
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
		if(matrix[i][j]<smallest){
			smallest=matrix[i][j];
		}	if(matrix[i][j]>largest){
				largest=matrix[i][j];
	   			
			}
		}
	}
		printf("\n\nThe smallest is %d\n",smallest);
		printf("The largest is %d\n",largest);
		printf("%d\t%d\t%d\t%d",matrix[0][1],matrix[0][2],matrix[0][3],matrix[0][4]);
	getch();
}
