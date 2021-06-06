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

int max_element(Node *root)
{
    if(root==NULL)
    return 0;
    int temp=root->key;
    int lmax= max(temp,max_element(root->left));
    int rmax=max(temp, max_element(root->right));

    if(lmax>=rmax)
    return lmax;
    return rmax;
}





int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left= new Node(40);
    root->left->right=new Node(100);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    int temp=max_element(root);
    cout<<temp<<endl;
    return 0;
}