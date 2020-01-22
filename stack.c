#include<stdio.h>
#include<stdbool.h>
#define SIZE 10


//various function declarations

void push(int);
int pop();
bool is_empty();
bool is_full();
int peek(); // return top of the stack

//stack defination
typedef struct{
    int arr[SIZE];
    int top;
}stack;

stack s;
s.top = -1;

int main()
{
    int foo,x;
    printf("***MENU*******\n\t1) Push\n\t2) Pop\n\t3) Peek \n\t 4) Exit\n");
    do{

        printf("Enter Option : ");
        scanf("%d",&foo);
        switch(foo){

            case 1: printf("Number: ");
                    scanf("%d",&x);
                    push(x);
                    break;

            case 2: printf("Number popped is: %d\n",pop());
                    break;

            case 3: printf("Number at the Top is: %d\n",peek());
                    break;
    }

    } while(foo != 4);

    


    return 0;
}

void push(int x){
    if(!is_full())
        s.arr[++s.top]=x;
    
    else
        printf("stack overflow !!!");
}

int pop(){

    if(!is_empty())
        return s.arr[s.top--];
    else
        printf("Stack is already empty");
}

bool is_full()
{
    if (s.top == (SIZE-1))
        return true;
    else
        return false;
}

bool is_empty()
{
    if(s.top == -1)
        return true;
    else
        return false;
}

int peek()
{
    return s.arr[s.top];
}

        


    
