#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          // Data 
    struct node *next; // Address 
}*head,*temp;


void createList(int n);
void displayList();
void reverse();


int main()
{
    int n;
    scanf("%d", &n);
    createList(n);
    displayList();
    reverse();
    return 0;
}



void createList(int n)
{
    struct node *newNode;
    head = 0;
    while ( n --){
        newNode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        if ( head == 0){
            temp = head = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
}
void displayList()
{
    temp = head;
    printf("Linked list: ");
    while(temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;              
        }
}
void reverse(){
    struct node *prev,*current,*Next;
    prev = 0;
    current = Next = head;
    while(Next != NULL){
        Next = Next->next;
        current->next= prev;
        prev = current;
        current = Next;
    }
    head = prev;
}

