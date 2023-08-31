#include <stdio.h>
void main (){
	int f,result;
	printf("				Temperature Converter\n\n");
	printf("enter Fahrenheit value:.....");
	scanf("%d",&f);
	result=(double)5/9*(f-32);
	printf("			* * * * * * * * * * *\n");
 	printf("%d fahrenheit =		*%d degrees celcius*",f,result);
 	printf("\n			* * * * * * * * * * *");
	getch();
}
