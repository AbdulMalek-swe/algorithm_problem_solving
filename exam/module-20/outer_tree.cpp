 
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
 
 
Node *input_tree()
{
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        int leftValue, rightValue;
        cin >> leftValue >> rightValue;
        Node *le;
        Node *ri;
        if (leftValue == -1)
        {
            le = NULL;
        }
        else
        {
            le = new Node(leftValue);
        }
        if (rightValue == -1)
        {
            ri = NULL;
        }
        else
        {
            ri = new Node(rightValue);
        }
        f->left = le;
        f->right = ri;
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return root;
}

 void print_left(Node *root){
    if(root->left==NULL){
        return;
    }
    if(root->left){
        cout<<root->left->value<<" " ;
        print_left(root->left);
    }else{
        cout<<root->right->value;
        print_left(root->right);
    }
 }
 void print_right(Node *root){
    if(root->right){
        cout<<root->right->value;
        print_right(root->right);
    }else{
        cout<<root->left->value<<" ";
        print_right(root->left);
    }
 }
 
int main()
{
    Node *root = input_tree();
     if(root){
         print_left(root);
    //  cout<<root->value<<" ";
    //  print_right(root);
     }
        return 0;
}