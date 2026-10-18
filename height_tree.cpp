#include<iostream>

using namespace std;
struct Node{
    int data;
    Node *right;
    Node *left;

};

int height(Node *root){
    if(root == NULL) return 0;
    
    int left_h = height(root->left);
    int right_h = height(root->right);

    return max(left_h,right_h) + 1;
}