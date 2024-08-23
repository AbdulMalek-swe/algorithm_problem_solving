 
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
 
int nodeLevel(Node *root, int searchedValue)
{
    // Write your code here.
    queue<pair<Node*,int>> q;
    queue<pair<Node*,int>> q1;
    
    q.push({root,0});
    q1.push({root,0});
    while(!q.empty()){
        pair<Node* ,int> pr= q.front();
       Node *node = pr.first;
        int l = pr.second;
      
        q.pop();
        
        if(node->left){
            q.push({node->left,l+1});
            q1.push({node->left,l+1});
        }
        if(node->right){
            q.push({node->right,l+1});
            q1.push({node->right,l+1});
        }
    } 
    while (!q1.empty())
    {
         pair<Node* ,int> pr= q1.front();
         Node *node = pr.first;
          int l = pr.second;
        if(l==searchedValue){
            cout<<node->value<<" ";
        }
        q1.pop();
    }
    
}

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

 
 
int main()
{
    Node *root = input_tree();
    int val;
    cin>>val;
    // recursion(root);
     nodeLevel(root,val);
        return 0;
}