#include<stdio.h>

struct node{
    int x;
    int y;
};

int main()
{
    struct  node s;

    int x,y;

    scanf("%d %d",&s.x,&s.y);

    s.x = x;
    s.y = y;

    printf("s.x := %d\ts.y := %d\n",s.x,s.y);

    return 0;
}


