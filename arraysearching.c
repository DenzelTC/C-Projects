#include<stdio.h>
void main(){/*searching for smallest in an array*/
	int number[]={31,5,97,21,1,93};
	int smallest,i;
	smallest=number[0];
	for(i=0;i<6;i++){
		if(number[i]<smallest){
			smallest=number[i];
   			
		}
	}
		printf("The smallest is %d\n",smallest);
}

