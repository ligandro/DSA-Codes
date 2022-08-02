

#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *create()
{
    struct Node *newNode;
    int x;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data (-1 if data= 0 ) : ");
    scanf("%d", &x );
    if ( x == -1){
        return 0;
    }
    newNode->data = x;
    printf("Enter  left child of %d : ",x);
    newNode->left = create();
    printf("Enter  right child of %d : ",x);
    newNode->right = create();
    return newNode;
}

void inorder(struct Node *root){
    if ( root == 0){
        return ;
    }
    inorder(root->left);
    printf(" %d",root->data);
    inorder(root->right);
}

void preorder(struct Node *root){
    if ( root == 0){
        return ;
    }
    printf(" %d",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node *root){
    if ( root == 0){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf(" %d",root->data);
}

void main(){
    struct node *root ;
    root = 0;
    root = create();
    inorder(root);
    preorder(root);
    postorder(root);
    
}
