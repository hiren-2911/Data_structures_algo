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


int getMaxWidth(Node* root)
    {
        if(root==NULL)
        return 0;
        queue<Node *> q;
        int cap=0,res=0;
        q.push(root);
        while(!q.empty())
        {
            cap=q.size();
            res=max(cap,res);
            for(int i=0;i<cap;i++)
            {
                Node *curr=q.front();
                q.pop();
                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
            }
            
        }
        return res;
    }


int main()
{
    Node *root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(4);
    root->left->left= new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    int temp;
    temp=getMaxWidth(root);
    cout<<temp<<endl;
    return 0;
}