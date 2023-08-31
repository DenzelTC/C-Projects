#include <stdio.h>
void main (){
	int t=0;
	printf("		Temperature Ratings\n");
	printf("\nEnter temperature:.....");
	scanf("%d",&t);
	if (t<0)
	{
		printf("Freezing");
	}
	if ((t>0)&&(t<10))
	{
		printf("Very Cold");
	}
	if((t>11)&&(t<20))
	{
		printf("Cold");
	}
	if((t>21)&&(t<30))
	{
		printf("Normal");
	}
	if ((t>31)&&(t<40))
	{
		printf("Hot");
	}
	if(t>=40)
	{
		printf("Very Hot");
	}
	getch();
}
