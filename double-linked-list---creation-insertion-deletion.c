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
void del();

struct Node *head,*temp;

int main()
{
    int n;
    scanf("%d", &n);
    createList(n);
    insert();
    displayList();
    del()
    displayList();
    return 0;
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
    while ( j < p){
        temp = temp->next;
        j++;
    }
    temp->next->prev = newNode;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    temp->next->prev = newNode;
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
            temp = head = newNode;
        }
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
}

void displayList()
{
    temp = head;
    printf("Linked list:");
    while(temp != NULL)
        {
            printf("-->%d", temp->data);
            temp = temp->next;              
        }
        printf("\n");
}

