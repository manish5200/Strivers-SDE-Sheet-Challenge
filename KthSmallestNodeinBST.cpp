//Method 1 -> TC -> O(n) : SC->O(h)
void solve(TreeNode<int> *root, int k,int&cnt,int &ans){
      if(root==NULL)return;
      solve(root->left,k,cnt,ans);
      cnt++;
      if(cnt==k){
          ans=root->data;
          return;
      }
      solve(root->right,k,cnt,ans);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	  int ans =0,cnt=0;
      solve(root,k,cnt,ans);
      return ans;
}

//Method 2 -> inorder 
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void inorder(TreeNode<int> *root,vector<int>&nodeValue){
       if(root==NULL)return;
       inorder(root->left,nodeValue);
       nodeValue.push_back(root->data);
       inorder(root->right, nodeValue);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	    vector<int>v;
        inorder(root,v);
        return v[k-1];
}
