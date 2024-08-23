#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    // Write your code here.
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root,1});
    while(!q.empty()){
        pair<TreeNode<int>*,int> pr= q.front();
         TreeNode<int> *node = pr.first;
        int l = pr.second;
      
        q.pop();
        if(node->val==searchedValue){
            return l;
        }
        if(node->left){
            q.push({node->left,l+1});
        }
        if(node->right){
            q.push({node->right,l+1});
        }
    }
}
