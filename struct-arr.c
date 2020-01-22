#include<stdio.h>
#define NKEYS 4

typedef struct{
    char *word;
    int length;
}keyword;

int main()
{
    keyword keytab[NKEYS] = {
        {"auto",4},
        {"static",6},
        {"register",8},
        {"while",5}
    };
    int i;

    for(i=0; i<4; i++){
        printf("keytab[%i] :: keyword := %s\tlength := %d\n",i,keytab[i].word,keytab[i].length);
    }


    return 0;
}
