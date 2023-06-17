//Reccursive

bool searchInBST(BinaryTreeNode<int> *root, int x) {
           if(root==NULL)return false;
           if(root->data==x)return true;
           if(root->data < x){
         bool right=searchInBST(root->right,x);
            if(right)return true;
           }else{
            bool left=searchInBST(root->left,x);
            if(left)return true;
           }
           return false;
       
}

//Itterative

bool searchInBST(BinaryTreeNode<int> *root, int x) {
        BinaryTreeNode<int> *temp=root;
        while(temp!=NULL){
            if(temp->data==x)return true;
            if(temp->data>x){
                temp=temp->left;
            }
            else{
                temp=temp->right;
            }
        }
        return false;
       
}
