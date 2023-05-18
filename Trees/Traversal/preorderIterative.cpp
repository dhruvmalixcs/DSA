#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int x)
    {
        data=x;
        left = NULL;
        right = NULL;
    }
};
vector<int> preorderIterative(Node* root)
{
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }
    stack<Node*> s;
    s.push(root);
    while(!s.empty())
    {
        root=s.top();
        s.pop();
        ans.push_back(root->data);
        if(root->right!=NULL)
        {
            s.push(root->right);
        }
        if(root->left!=NULL)
        {
            s.push(root->left);
        }
    }
    return ans;
}
int main()
{
    Node*root=new Node(1);
    root->left = new Node(2);
    root->right=new Node(3);
    root->left->left = new Node(5);
    root->right->left=new Node(6);
    root->left->left->left = new Node(9);
    root->right->left->right=new Node(10);
    vector<int>ans;
    ans=preorderIterative(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}