#include<stdio.h>

typedef struct{
    int a;
    float b;
}node;

node foo = {23,34.54};


int sum();

int main()
{

    int a=234,b=435;

    int add = sum();

    printf("%d\n",add);

    return 0;
}

int sum(){
    return foo.a + foo.b;
}
    
