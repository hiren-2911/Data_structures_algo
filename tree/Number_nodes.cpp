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
int number(Node *root)
{
    if(root==NULL)
    return 0;
    else
    return 1+number(root->left)+number(root->right);
}

int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left= new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    int temp=number(root);
    cout<<temp<<endl;
    return 0;
}