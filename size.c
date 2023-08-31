#include <stdio.h>
void main (){
	printf("the size of an int on my machine is %dbytes ",sizeof (int));
	printf("\nthe size of a char on my machine is %d bytes ",sizeof (char));
	printf("\nthe size of a double on my machine is %dbytes ",sizeof (double));
	printf("\nthe size of an float on my machine is %dbytes ",sizeof (float));
	printf("\n the size of my name on my machine is %dbytes ",sizeof ("Denzel"));
	getch();
}
