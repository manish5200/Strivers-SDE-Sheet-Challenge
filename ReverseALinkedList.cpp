//Method 1 ->
LinkedListNode<int> *reverse(LinkedListNode<int> *head){
      if(head==NULL || head->next==NULL)return head;
      LinkedListNode<int> *prev=NULL;
      LinkedListNode<int> *curr=head;
      LinkedListNode<int> *fwd=NULL;
      while(curr!=NULL){
           fwd=curr->next;
           curr->next=prev;
           prev=curr;
           curr=fwd;
      }
      return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
        if(head==NULL || head->next==NULL)return true;
       LinkedListNode<int> *slow=head;
       LinkedListNode<int> *fast=head->next;
       while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
       }
       slow->next=reverse(slow->next);
       slow=slow->next;
       LinkedListNode<int> *dummy=head;
       while(slow!=NULL){
           if(dummy->data != slow->data)return false;
           slow=slow->next;
           dummy=dummy->next;
       }
       return true;
}

//Method 2 ->

bool isPalindrome(LinkedListNode<int> *head) {
       vector<int>v;
       LinkedListNode<int> *temp=head;
       while(temp!=NULL){
           v.push_back(temp->data);
           temp=temp->next;
       }
       int i=0;
       int j=v.size()-1;
       while(i<=j){
           if(v[i] != v[j]){
               return false;
           }
             i++;
             j--;
       }
       return true;
}
