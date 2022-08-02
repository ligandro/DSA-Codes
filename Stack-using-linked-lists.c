#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*top;

void push(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = top;
    top= newNode;
}

void display(){
    struct node *temp;
    temp = top;
    if ( top == 0){
        printf("Empty");
    }
    else{
        while ( temp != 0){
            printf("%d", temp->data);
            temp = temp->next;
            }
    }
}

void peek(){
    if ( top == 0){
        printf("Empty");
    }
    else{
        printf("%d", top->data);
    }
}

void pop(){
     struct node *temp;
     temp= top;
     top = top->next;
     free(temp);
}

int main()
{
    push(1);
    push(2);
    display();
    pop();
    push(3);
    peek();
    

	return 0;
}