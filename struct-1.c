#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int p;
    int a;
}node;

int main()
{
    node* foo = (node*)malloc(sizeof(node));
    if(!foo){
        printf("Couldn't allocate memory !");
        exit(0);
    }

    int x,y;

    scanf("%d %d",&x,&y);

    foo->p = x;
    foo->a = y;

    printf("foo->p := %d\tfoo->a := %d\n",foo->p,foo->a);

    free(foo);
    return 0;
}
