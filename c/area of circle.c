#include <stdio.h>
void main (){
	int r, result;
	printf("		Area calculator of a circle\n");
	printf("Enter radius;......");
	scanf("%d",&r);
	result=22/7 *(r*r);
	printf("Area of the circle= %d",result);
	getch();
}
