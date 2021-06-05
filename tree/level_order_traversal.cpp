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
void printk(Node *root,int k)
{
    if(root==NULL)
    return;
    if(k==0)
    cout<<root->key<<endl;
    else
    {
        printk(root->left,k-1);
        printk(root->right,k-1);
    }
}

int heighttree(Node *root)
{
    if(root==NULL)
    return 0;
    int lheight=heighttree(root->left);
    int rheight=heighttree(root->right);
    if(lheight>rheight)
    return lheight+1;
    return rheight+1;
}
void bftraverse(Node *root)
{
    int height=heighttree(root);
    for(int i=0;i<height;i++)
    printk(root,i);
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
    bftraverse(root);
    return 0;
}