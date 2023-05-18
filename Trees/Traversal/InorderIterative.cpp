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
vector<int> inorder(Node*root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
    stack<Node*>st;
    while(true)
    {
        if(root!=NULL)
        {
            st.push(root);
            root=root->left;
        }
        else
        {
            if(st.empty())
            {
                break;
            }
            root=st.top();
            st.pop();
            ans.push_back(root->data);
            root=root->right;
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
    ans=inorder(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
