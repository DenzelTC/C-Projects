#include<stdio.h>
void main(){
	const int ELEMENTS=6;
	int number[]={31,5,97,21,1,93};
	int i;
	int temp;
	printf("\t\t\tArray rearranging in Ascending order\n\n");
	printf("Elements of the array : {");
	for(i=0;i<ELEMENTS;i++){
		printf("%d, ",number[i]);
	}
	printf("}");
	for(i=0;i<ELEMENTS-1;i++){
		if(number[i]>number[i+1]){
			temp= number[i];
			number[i]=number[i+1];
			number[i+1]=temp;
		}
	}
		printf("\nAscending order : {");
	for(i=0;i<ELEMENTS;i++){
		printf("%d,",number[i]);
	}
	printf("}");
	getch ();
}
