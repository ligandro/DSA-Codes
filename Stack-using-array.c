/******************************************************************************
#include <stdio.h>
#define N 5


int stack[N];
int top = -1;

void  push(){
    int x;
    scanf("%d", &x);
    if ( top == N-1){
        printf("Overflow");
    }
    else {
        top++;
        stack[top] = x;
    }
}

void pop(){
    int p;
    if(top == -1){
         printf("Underflow");
    }
    else {
        p = stack[top];
        printf("Popped element is : %d", p);
        top--;
    }
}

int peek(){
    if(top == -1){
         printf("Underflow");
    }
    else {
        printf("%d", stack[top]);
    }
    return 0;
    
}

void display(){
    int p;
    for ( p = top; p >= 0 ; p--){
        printf("%d", stack[p]);
    }
}

int main()
{
    int t = N;
    while ( t > 0){
        push();
        t--;
    }
    peek();
    display();
    pop();

	return 0;
}
