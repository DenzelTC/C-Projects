#include <stdio.h>
void main(){
	int a,b,c,d,e;
	a=5,b=4,c=0,d=0,e=0;
	c=a+b;
	printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
	a=a+b;
	printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
	a+=b;
	printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
	a=a+1;
	printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
	a=5;
	d=a++;
	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
	a=5;
	d=++a;
	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
	getch();
	
}
