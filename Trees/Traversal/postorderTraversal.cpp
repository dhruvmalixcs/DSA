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
        data = value;
        left = NULL;
        right = NULL;
    }
};
void postorder(Node*curr)
{
    if(curr==NULL)
    {
        return;
    }
    postorder(curr->left);
    postorder(curr->right);
    cout<<curr->data<<" ";
}
int main()
{
    Node*root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    postorder(root);
}