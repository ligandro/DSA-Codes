#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          // Data Circular LL
    struct node *next; // Address 
}*head,*temp,*tail;


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
        tail = temp;
        tail->next = head;
    }
}

void insert(int o)
{
    struct node *newNode;
    temp = tail->next;
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
    temp = tail->next;
    while( i < p-1)
        {
            temp = temp->next; 
            i++;
        }
    nextNode = temp->next;
    temp->next = nextNode->next;
    free(nextNode);
}

void delbeg(){
    temp= tail->next;
    tail->next= temp->next;
    free(temp);
}

void delend(){
    struct node *current,* prev;
    current = tail->next;
    while( current->next != tail->next){
        prev = current;
        current = current->next;
    }
    prev->next= tail->next;
    tail = prev;
    free(current);
}

void reverse(){
    struct node *prev,*current,*Next;
    current =  tail->next;
    Next = current->next;
    while( current != tail){
        Next = Next->next;
        current->next= prev;
        prev = current;
        current = Next;
    }
    Next->next= tail;
    tail= Next;
}
void displayList()
{
    temp = tail->next;
    printf("Linked list:");
    while(temp != tail)
        {
            printf("->%d", temp->data);
            temp = temp->next;              
        }
}


