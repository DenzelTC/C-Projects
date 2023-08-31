#include <stdio.h>
void main(){
	char studentDetails[] = "H171770, James, Programming, "; //declares array 
	char*ptr;			//declares pointer
	ptr = strtok(studentDetails, ", " );		//assigns string token to pointer
	
	while (ptr!=NULL){
		printf("%s\n",ptr);
		ptr = strtok(NULL, ", " ); //runs strtok until until file end
	} 
}
