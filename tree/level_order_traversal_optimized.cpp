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

void bfopt(Node *root)
{
    queue<Node *> q;
    if(root==NULL)
    return;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr=q.front();
        q.pop();
        cout<<curr->key<<endl;
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
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
    bfopt(root);
    return 0;
}