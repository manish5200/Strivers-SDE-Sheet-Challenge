//Method 1 ->
#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int> *root,vector<int>&nodeValue){
       if(root==NULL)return;
       inorder(root->left,nodeValue);
       nodeValue.push_back(root->data);
       inorder(root->right, nodeValue);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
        vector<int>v;
        inorder(root,v);
      sort(v.begin(),v.end(),greater<int>());
        if(k>v.size())return -1;
        return v[k-1];
}
