/* Name : Anthony T Chipandu 
Reg Number: 
Programme :BEng in Mechatronic Engineering
Level :1.1 
Assignment 1 */

#include <stdio.h>
void main(){
	
//declaration of variables  
char initials [2];
int num1,num2,num3;
int prod,diff,sum,mod,result;

//prompt to enter initials 
printf("Enter initials - ");
scanf("%s",&initials);
printf("Welcome %s ",initials);

//prompts to enter the number of choice 
printf("\n\nEnter first number - ");
scanf("%d",&num1);
printf("\nEnter second number - ");
scanf("%d",&num2);
printf("\nEnter first number - ");
scanf("%d",&num3);

//calculation formula and initialisation
prod = num1*num2*num3;
diff = num1-num2-num3;
sum= num1+num2+num3;
mod = (num1+num2)%(num2+num3);

//results displays
printf("\n\n The product of the 3 numbers is %d",prod);
printf("\nThe difference of the 3 numbers is %d",diff);
printf("\nThe sum of the 3 numbers is %d",sum);
printf("\nThe remainder of dividing the sum of the first 2 numbers by the last 2 is %d",mod);
printf("\n\n Thank you %s for using this system. Have a good day.",initials);

getch();
}
