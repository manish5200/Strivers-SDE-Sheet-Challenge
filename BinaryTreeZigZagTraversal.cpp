
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
          vector<int>res;
          if(root==NULL)return res;
          queue<BinaryTreeNode<int>*>q;
          q.push(root);
          bool direcLtoR=true;
          while(!q.empty()){
              int size=q.size();
              vector<int>temp(size);
            for(int i=0;i<size;++i){
              auto node=q.front();
               q.pop();
            if(direcLtoR){
                temp[i]=node->data;
            }else{
                 temp[size-i-1]=node->data;
            }
            if(node->left)q.push(node->left);
           if(node->right)q.push(node->right);
             }
             for(auto it:temp){
                 res.push_back(it);
             }
             direcLtoR=!direcLtoR;
          }
          return res;
}
