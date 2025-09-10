#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>







int main (){

char positive[3][100] = {
    "thats good",
    "all i want for you",
    "owkey so you have a good news"

};
char negative[3][100]={
     "thats so bad i hope i can help you",
     "whats going on, tell me",
     "lets fix you mood"
};

char wordh[5]={"happy"};

char words[6]={"sad"};


char text[100];
printf("enter a text :");
fgets(text,sizeof(text),stdin);

text[strcspn(text,"\n")] = '\0';

if(strcmp(text,wordh)==0)

printf("%s",positive[1]);

if(strcmp(text ,words)==0)

printf("%s",negative[1]);




    return 0;
}