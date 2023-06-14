#include<bits/stdc++.h>
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int len(Node* head){
      if(head==NULL)return 0;
      int length=0;
      Node* temp=head;
      while(temp!=NULL){
          temp=temp->next;
          length++;
      }
      return length;
}
Node *findMiddle(Node *head) {
    if(head->next==NULL || head==NULL)return head;
      int reqLen=ceil(len(head)/2);
      Node* slow=head;
      int cnt=1;
      while(cnt<=reqLen){
          slow=slow->next;
           cnt++;
      }
      return slow;
}

