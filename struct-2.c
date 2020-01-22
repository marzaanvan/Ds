#include<stdio.h>


typedef float bar;

int main()
{
    typedef int foo;
    typedef float bar;

    foo 23;
    bar 435.567;

    printf("foo := %d\tbar:= %d\n", foo,bar);

    return 0;
}
