#include<stdio.h>
void main(){
	int number[]={31,5,97,21,1,93};
	int found=0,search,i;
	printf("Enter number to be searched\n");
	scanf("%d",&search);
	for(i=0;i<6;i++){
		if(number[i]==search){
			found=1;
	}
		}if (found==1){
			printf("The number %d was found\n",search);
		}
	
	
		
}

