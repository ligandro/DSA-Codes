/******************************************************************************
#include <stdio.h>
#define N 5


int  q[N];
int front = -1;
int rear = -1;

void  enqueue(){
    int x;
    scanf("%d", &x);
    if ( rear == N-1){
        printf("Overflow");
    }
    else if (front == -1 && rear == -1){
        front = rear = 0;
        q[rear] = x;
    }
    else{
        rear++;
        q[rear] = x;
    }
}

void dequeue(){
    if (front == -1 && rear == -1){
        printf("Underflow");
    }
    else if (front == rear ){
        front = rear = -1;
    }
    else{
        printf("%d", q[front]);
        front++;
    }
}

int peek(){
    if( front== -1){
         printf("Underflow");
    }
    else {
        printf("%d", q[front]);
    }
    return 0;
    
}

void display(){
    int i;
     if (front == -1 && rear == -1){
        printf("Underflow");
    }
    else{
        for ( i = front; i < rear+1; i++){
        printf("%d", q[i]);
        }   
    }
}

int main()
{
    int t = N;
    while ( t > 0){
        enqueue();
        t--;
    }
    dequeue();
    display();

	return 0;
}