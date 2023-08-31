#include <stdio.h>
void main(){
	char ch;
	char vc;
	printf("press any key:.....");
	scanf("%c",&ch);
	scanf("%c",&vc);
	printf("the character you pressed was ");
	printf("'%c'",(ch+vc));
	getch();
}
