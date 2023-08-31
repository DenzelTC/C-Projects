#include <stdio.h>
void main(){
	int s=0,h=0,m=0,r=0;
	printf("			Time Converter\n");
	printf("Enter time in seconds:..... ");
	scanf("%d",&s);
	if (m=1)
	{
		h= s/3600;
		m= (s%3600)/60;
		r=((s%3600)%60);
	}
	printf("\n\n\n%d seconds=  		*%d hour/s,%d minute/s,%d second/s*", s,h,m,r);
	getch();
}
