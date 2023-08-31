#include <stdio.h>
void main (){
	int a,b,result;
	printf("			Rectangle Perimeter \n");
	printf("Enter Width:..... ");
	scanf("%d",&a);
	printf("\nEnter Length:.... ");
	scanf("%d", &b);
	result=(a+b)*2;
	printf("\n* * * * * * * * *");
	printf("\n*Perimeter = %d *",result);
	printf("\n* * * * * * * * *");
	getch();
}
