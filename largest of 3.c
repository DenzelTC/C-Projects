#include <stdio.h>
void main (){
	int a,b,c,largest;
	printf("			Largest Number\n\n");
	printf("\nEnter first number:......");
	scanf("%d",&a);
	printf("\nEnter second number:.....");
	scanf("%d",&b);
	printf("\nEnter third number:......");
	scanf("%d",&c);
	if((a>b)&&(a>c))
	{
		largest=a;
	}
	
	if((b>a)&&(b>c))
	{
		largest=b;
	}
	if((c>a)&&(c>b))
	{
		largest=c;
	}
	
	printf("%d is the largest number",largest);
	getch();
}
