#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
class Solution{
    Node *root;
    public:
    Solution(){
        root = NULL;
    }

    void Kthlevel(Node *root,int k){
        if(root == NULL) return;

        if(k == 1){
            return ;
        }

        Kthlevel(root->left , k-1);
        Kthlevel(root->right,k-1);

    }
};

