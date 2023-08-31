#include <stdio.h>
void main(){
FILE *myfile;
char buff [100];
myfile=fopen("myfile.txt","w+");
fscanf(myfile,"%s",buff);
printf("1 : %s\n",buff);

fgets(buff,255,(FILE*)myfile);
printf("2: %s\n",buff);

fgets(buff,255,(FILE*)myfile);
printf("3: %s\n",buff);
fclose(myfile);
}
