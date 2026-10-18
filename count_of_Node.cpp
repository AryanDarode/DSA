#include<iostream>

using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};

int count_n(Node *root){
    if(root == NULL) return 0;

    int l_count = count_n(root->left);
    int r_count = count_n(root->right);

    return l_count+r_count + 1;
}

int sum_node(Node *root){
    if(root == NULL){
        return 0;
    }
    int left_sum = sum_node(root->left);
    int right_sum = sum_node(root->right);
    
    return left_sum+right_sum+root->data;
}