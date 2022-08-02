/******************************************************************************

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = 0;
    if ( front == 0 && rear == 0){
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear= newNode;
    }
}

void display(){
    struct node *temp;
    if ( front == 0 && rear == 0){
        printf("Underflow");
    }
    else{
        temp = front;
        while ( temp != 0){
            printf("%d", temp->data);
            temp = temp->next;
            }
    }
}

void peek(){
        printf("%d", front->data);
    }

void dequeue(){
     struct node *temp;
     temp = front;
     if ( front == 0 && rear == 0){
        printf("Underflow");
    }
    else{
        
     front = front->next;
     free(temp);
        
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    dequeue();
    enqueue(3);
    display();
	return 0;
}
