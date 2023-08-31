#include <stdio.h>
void main(){
	int result,i;
	int number[5];
	printf("\t\t\tAdds 5 numbers");
	for (i=0;i<5;i++)
	{	number[1]='a';
		printf("\nEnter number for position%d\n",i+1);
		scanf("%d",&number[i]);
		result+=number[i];
	}
	printf("Sum is %d",result);
	getch();
}
