#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int value)
    {
        data=value;
        left=NULL;;
        right=NULL;
    }
};
void inorder(Node*curr)
{
    if(curr==NULL)
    {
        return;
    }
    inorder(curr->left);
    cout<<curr->data<<" ";
    inorder(curr->right);
}
int main()
{
    Node*root=new Node(1);
    root->left = new Node(5);
    root->right=new Node(8);
    inorder(root);
}