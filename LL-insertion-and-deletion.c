#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          // Data 
    struct node *next; // Address 
}*head,*temp;


void createList(int n);
void displayList();
void insert(int o);
void delList();


int main()
{
    int n;
    scanf("%d", &n);
    createList(n);
    int o;
    scanf("%d", &o);
    insert(o);
    delList();
    displayList();
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

void insert(int o)
{
    temp = head;
    while( temp->data != o)
        {
            temp = temp->next; 
        }
        newNode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        newNode->next = temp->next;
        temp->next = newNode;
}
void delList()
{
    struct node *nextNode;
    int p,i=1;
    scanf("%d", &p);
    temp = head;
    while( i < p-1)
        {
            temp = temp->next; 
            i++;
        }
    nextNode = temp->next;
    temp->next = nextNode->next;
    free(nextNode);
}

void displayList()
{
    temp = head;
    printf("Linked list:");
    while(temp != NULL)
        {
            printf("->%d", temp->data);
            temp = temp->next;              
        }
}


