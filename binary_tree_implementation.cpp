#include<iostream>
using namespace std;
struct bstNode {
    int data;
    bstNode* left;
    bstNode* right;
};                   // Node will be created in heap using new operator in c++.

bstNode* GetNewNode(int data){
    bstNode* newNode = new bstNode();
    (*newNode).data = data;    // or newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
}


bstNode* Insert(bstNode* root, int data){
    if(root == NULL){
        root = GetNewNode(data);
        return root;
    }
    else if(data <= root->data ){
        root -> left = Insert(root ->left, data);
    }  
    else{
        root ->right = Insert(root -> right, data);
    }

    return root;
}
