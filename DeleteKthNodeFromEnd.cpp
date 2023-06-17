//Approach 1-> Rabbit and Tortoise Method

Node* removeKthNode(Node* head, int K)
{
     Node* dummy =new Node();
      dummy->next=head;
     Node* slow=dummy;
     Node* fast=dummy;
     while(K--){
         fast=fast->next;
     }
     while(fast!=NULL && fast->next!=NULL){
           fast=fast->next;
           slow=slow->next;
     }
       slow->next=slow->next->next;
       return dummy->next;
}

//Approach 2->
int countLen(Node* head){
     if(head==NULL)return 0;
     Node* temp=head;
     int cnt=0;
     while(temp!=NULL){
           cnt++;
            temp=temp->next;
     }
     return cnt;
}
Node* removeKthNode(Node* head, int K)
{
    if(head==NULL)return NULL;
      int len=countLen(head);
      if(len==K){
    Node* node =head;
    head=head->next;
    delete node;
    return head; 
      }else{
      Node* temp=head;
      int cnt=1;
      while(cnt<(len-K)){
            temp=temp->next;
            cnt++;
      }
        Node* t =temp->next;
        temp->next=temp->next->next;
        delete t;
        return head;
      }
}
