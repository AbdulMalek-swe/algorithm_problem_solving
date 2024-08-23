#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};
Node * input_tree(){
    Node * root;
     int val;
     cin>>val;
     if(val==-1) root =NULL;
     else{
     root = new Node(val);
     }
       queue<Node*>q;
     if(root){
        q.push(root);
     }
   while (!q.empty())
   {
    Node *f = q.front();
    q.pop();
    int leftValue,rightValue;
    cin>>leftValue>>rightValue;
    Node *le;
    Node *ri;
    if(leftValue==-1){
      le = NULL;
    }else{
        le = new Node(leftValue);
    }
    if(rightValue==-1){
        ri = NULL;
    }else{
       ri = new Node(rightValue);
    }
    f->left = le;
    f->right = ri;
    if(f->left){
        q.push(f->left);
    }
    if(f->right){
        q.push(f->right);
    } 
   }
   return root;
}

void recursion(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->value << " ";
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}

int main() {
    Node *root = input_tree();
    recursion(root);
    return 0;
}