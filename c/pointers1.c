#include<stdio.h>
#include<string.h>
void main(){
	char *name="Jonathan";
	char word1[]="apple";
	char word2[]="banana";
	char word3;
	int result=strcmp(word1,word2);
	//scanf("%s",&name);
	printf("%s\n",name);
	
	if	(result>0){
		printf("%s comes before %s alphabetically\n",word1,word2);//before

	}
	else if (result==0){
		printf("%s and %s are the same \n",word1,word2);//equal
	}
	else if (result<0){
		printf("%s comes after %s alphabetically ",word2,word1);//after
	}
getch();
}
