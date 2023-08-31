#include <stdio.h>
void main (){
	int selection,r,l,w,b,h,area;
	printf("			Area Calculator\n\n\n");
	printf("Press 1 for triangle ");
	printf("\nPress 2 for rectangle");
	printf("\nPress 3 for circle");
	printf("\nEnter selection : ");
	scanf("%d",&selection);
	switch(selection)
	{
	   	case 1:
	  	printf("Enter base and height of the triangle:.....");
	  	scanf("%d%d",&b,&h);
	  	area=.5*b*h;
	  	break;
	    case 2:
	  	printf("Enter length and width of the rectangle:.... ");
	  	scanf("%d%d",&l,&w);
	  	area=l*w;
	  	break;
	    case 3:
	  	printf("Enter radious of the circle:..... ");
	  	scanf("%d",&r);
	  	area=3.143*r*r;
	  	break;
  	}
  	printf("Area is:.... %d",area);
}

