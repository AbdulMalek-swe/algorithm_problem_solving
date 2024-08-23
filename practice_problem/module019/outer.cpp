#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
TreeNode *input_tree()
{
    int rootValue;
    cin >> rootValue;
    TreeNode *root;
    if (rootValue == -1)
    {
        root = NULL;
        
    }
    else
    {
        root = new TreeNode(rootValue);
    }
    queue<TreeNode*>q;
    if(root) q.push(root);
    while (!q.empty())
    {
         int leftValue,rightValue;
         TreeNode *node = q.front();
         q.pop();
         cin>>leftValue>>rightValue;
         if(leftValue==-1){
            node->left=NULL;
         }else{
            node->left=new TreeNode(leftValue);
         }
         if(rightValue==-1){
            node->right=NULL;
         }else{
            node->right=new TreeNode(rightValue);
         }
         if(node->left){
            q.push(node->left);
         }
         if(node->right){
            q.push(node->right);
         }
    }
    
    return root;
}

vector<int> getLeftView(TreeNode *root)
{
     queue<pair<TreeNode*,int>>q;
    if(root) q.push({root,1});
     bool isTrue[3005]={false};
     vector<int>v;
     while (!q.empty())
     {
         pair<TreeNode*,int>pr=q.front();
         q.pop();
        TreeNode *node = pr.first;
        int l = pr.second;
        if(isTrue[l]==false){
            v.push_back(node->data);
            isTrue[l] = true;
        }
        if(node->left){
            q.push({node->left,l+1});
        }
        if(node->right){
            q.push({node->right,l+1});
        }
     }
    
     return v;
}
void recursion(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *f = q.front();
        q.pop();
        cout << f->data << " ";
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

int main()
{
    TreeNode *root = input_tree();
    // recursion(root);
    // cout << root->data;
 vector<int>m = getLeftView(root);

    for (int i = 0; i < m.size(); i++) {
        cout << m[i] << " ";
    }
    cout << endl;
    return 0;
}