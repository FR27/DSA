
#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int x)
{
    if (top<CAPACITY-1){
    top=top+1;
    stack[top]=x;
    }
    else printf("Exception! No Spaces\n" );
}
int pop()
{
    if(top>=0) 
    {
        int val=stack[top];
        top=top-1;
        return val;
    }
    else printf("Exception from pop! Empty stack\n");
    return -1;
}
int peek()
{
    if(top>=0)
    {
        return stack[top];
    }
    printf("Exception from peek!Empty Stack\n");
    return -1;
}
int main() {
    
    printf("Implementing my stack in C\n");
    
    push(10);
    push(20);
    push(30);
    pop();
    printf("\n%d", peek());
    return 0;
}