#include <stdio.h>
void main (){
	int u,amount;
	printf("		Electricity bills");
	printf("\nEnter units consumed:.....");
	scanf("%d",&u);
	if (u<199)
	{
		amount= 1.2 *u;
		printf("Charge for electricity consumption is$ %d  ",result);
	}
	if ((u>=200)&&(u<=400))
	{
		amount= 1.5 * u;
		printf("Charge for electricity consumption is$ %d  ",result");
	}
	if ((u>=400)&&(u<=600))
	{
		amount= 1.8 * u
		printf("Charge for electricity consumption is$ %d  ",result");
	}
	getch();
	
}
