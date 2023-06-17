//Most Optimal Method 
Node* findIntersection(Node *fHead, Node *sHead)
{
       if(fHead==NULL || sHead==NULL)return NULL;
          Node *a=fHead;
          Node *b=sHead;
          while(a!=b){
              a= a == NULL ? sHead:a->next;
              b= b == NULL ? fHead:b->next;
          }
          return a;
}
//Method --> Optimized 
#include<bits/stdc++.h>
Node* findIntersection(Node *fHead, Node *sHead)
{
       if(fHead==NULL || sHead==NULL)return NULL;
        Node* a=fHead;
        Node* b=sHead;
        unordered_set<Node*>st;
        while(a){
            st.insert(a);
            a=a->next;
        }
        while(b){
            if(st.find(b) !=st.end()){
                return b;
            }
            b=b->next;
        }
        return NULL;
}
