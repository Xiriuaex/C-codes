/*
    Binary search tree is an efficient structure to organize data
    for quick search as well as quick update.

    Binary Search Tree:
        A binary tree in which for each node, value of all the nodes in left 
        subtree is lesser or equal and value of all the nodes in right 
        subtree is greater.
    
*/  

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


//function to create a new node:
struct Node* newNode(int key){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data= key;
    newNode->left=newNode->right=NULL;
    return newNode;
}

//function to traverse node:
void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
//function to traverse node:
void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
//function to traverse node:
void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}

//function to insert node in the tree:
struct Node* insert(struct Node* root, int key){
    if(root==NULL){
        root=newNode(key);
        return root;
    }
    else if(key< root->data){
        root->left=insert(root->left, key);
    }
    else if(key> root->data){
        root->right=insert(root->right, key);
    }

    return root;

}

//function to search node:
bool Search(struct Node* root, int key){
    if(root== NULL) return false;
  else if(root->data==key) return true;
  else if(root->data>=key) return Search(root->left, key);
  else if(root->data<key) return Search(root>right, key);
}

 /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
       
int main(){
    struct Node* root= NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    // Print inorder traversal of the BST
    inorder(root);
}

