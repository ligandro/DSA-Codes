/******************************************************************************
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void createList(int n);
void displayList();
void insert();


struct Node *head,*temp,*tail;

int main()
{
    int n;
    scanf("%d", &n);
    createList(n);
    insert();
    displayList();
    return 0;
}


void createList(int n)
{
    struct Node *newNode;
    head = 0;
    int i;
    for ( i = 0 ; i < n ;i++){
        newNode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data );
        newNode->prev = 0;
        newNode->next = 0;
        if ( head == 0){
            head =tail =  newNode;
            head->next = tail;
            head->prev = head;
        }
        else {
            tail->next = newNode;
            newNode->next = head;
            newNode->prev = tail;
            head->prev = newNode;
            tail = newNode;
        }
    }
}

void insertbeg(){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &newNode->data );
    newNode->next = head;
    newNode->prev= tail;
    tail->next = newNode;
    head->prev = newNode;
    head = newNode;
}

void insertend(){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &newNode->data );
    newNode->next = head;
    newNode->prev= tail;
    tail->next= newNode;
    tail = newNode;
    head->prev = tail;
}

void insert()
{
    struct Node *newNode;
    temp = head;
    int p;
    scanf("%d", &p);
    newNode = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &newNode->data );
    int j=1;
    if ( p == 1){
        insertbeg();
    }
    else{
        while ( j < p-1){
        temp = temp->next;
        j++;     
        }
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
        
    }
}

void delbeg(){
    temp = head;
    head = temp->next;
    head>prev = tail;
    tail->next = head;
    free(temp);
}
void delend(){
    temp = tail;
    tail = temp->prev;
    tail->next = head;
    head->prev = tail;
    free(temp);
}

void del(){
    int p,j=1;
    scanf("%d", &p);
    temp = head;
    while ( j < p){
        temp = temp->next;
        j++;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    free(temp);
}
void displayList()
{
    temp = head;
    printf("Linked list:");
    while(temp->next != tail->next)
        {
            printf("-->%d", temp->data);
            temp = temp->next;              
        }
        printf("\n");
}
