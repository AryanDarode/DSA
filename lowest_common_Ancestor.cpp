#include<iostream>
#include<algorithm>

using namespace std;

struct Node{
    int data;
    Node *right;
    Node *left;
};

class Solution{
    Node *root;
    public:
    
    Node *LCA(Node *root , Node *p,Node *q){
        if(root ==NULL) return NULL;

        Node *leftlca = LCA(root->left,p,q);
        Node *rightlca = LCA(root->right,p,q);

        if(leftlca && rightlca){
            return  root;
        } else if(leftlca != NULL){
            return leftlca;
        } else{
            return rightlca;
        }
    }

};