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

void dftraverse(Node *root)
{
    if(root!=NULL)
    {
        dftraverse(root->left);
        cout<<root->key<<endl;
        dftraverse(root->right);
    }
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
    dftraverse(root);
    return 0;
}
