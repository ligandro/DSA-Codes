

#include <stdio.h>
#include <stdlib.h>
 
struct btnode
{
    int value;
    struct btnode *left;
    struct btnode *right;
}*root = NULL, *newNode = NULL;

/* To create a node */
void create()
{
    int data;
    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    newNode = (struct btnode *)malloc(1*sizeof(struct btnode));
    newNode->value = data;
    newNode->left = newNode->right = NULL;
}

/* Function to search the appropriate position to insert the new node */
void search(struct btnode *t)
{
    if ((newNode->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
        search(t->r);
    else if ((newNode->value > t->value) && (t->r == NULL))
        t->r = newNode;
    else if ((newNode->value < t->value) && (t->l != NULL))    /* value less than root node value insert at left */
        search(t->l);
    else if ((newNode->value < t->value) && (t->l == NULL))
        t->l = newNode;
}

void insert()
{
    create();
    if (root == NULL) 
        root = newNode;
    else    
        search(root);    
}

void search_d(){
    If root == NULL 
    return NULL;
    else if number == root->data 
    return root->data;
    else if number < root->data 
    return search_d(root->left)
    else if number > root->data 
    return search_d(root->right)
    else return 0;
}

