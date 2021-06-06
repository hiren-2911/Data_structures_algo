#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node (int x)
    {
        key=x;
        right=left=NULL;
    }
};

int check_bal(Node* root)
{
    if(root==NULL)
    return -1;
    int lft=check_bal(root->left);
    if(lft==-1)
    return -1;
    int rht=check_bal(root->right);
    if(rht==-1)
    return -1;
    if(abs(lft-rht)>1)
    return -1;
    return max(lft,rht)+1;
}
bool balance(Node *root)
{
    int temp=check_bal(root);
    if(temp==-1)
    return false;
    return true;
}

int main()
{
    Node *root=new Node(10);
    root->left=new Node(8);
    //root->right=new Node(4);
    root->left->left= new Node(40);
    root->left->right=new Node(50);
    //root->right->left=new Node(60);
    //root->right->right=new Node(70);
    bool temp;
    temp=balance(root);
    cout<<temp<<endl;
    return 0;
}