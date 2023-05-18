#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(Node*curr)
{
    if(curr==NULL)
    {
        return;
    }
    cout<<curr->data<<" ";
    preorder(curr->left);
    preorder(curr->right);
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(9);
    preorder(root);
}