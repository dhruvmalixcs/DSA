#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
vector<int> postorder(Node*root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
    stack<Node*>st1;
    stack<Node*>st2;
    st1.push(root);
    while(!st1.empty())
    {
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=NULL)
        {
            st1.push(root->left);
        }
        if(root->right!=NULL)
        {
            st1.push(root->right);
        }
    }
    while (!st2.empty())
    {
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    
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
    ans=postorder(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}