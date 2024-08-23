 
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
void recursion(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<int> v;
    if(root==NULL) {
        cout<<"not available";
        return;
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
        {
            // sum+=f->value;
            // cout<<f->value<<" ";
            v.push_back(f->value);
        }
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
  sort(v.rbegin(),v.rend());
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
    // cout<<sum<<endl;
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

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}
int count(Node *root){
    if(root==NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;
    // return 1;
}
int main()
{
    Node *root = input_tree();
    // recursion(root);
     int cn = count(root);
    int max = maxHeight(root);
    int pw = pow(2,max);
    if(pw-1==cn){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
        return 0;
}