//Itterative
#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	     priority_queue<int,vector<int>,greater<int>>pq;
		 while(!stack.empty()){
			 pq.push(stack.top());
			 stack.pop();
		 }
		  while(!pq.empty()){
			  stack.push(pq.top());
			  pq.pop();
		  }
}
//Recursive
#include <bits/stdc++.h> 
void insert(stack<int>&st,int num){
	 if(st.empty() || st.top()<num){
		st.push(num);
		return;
	 }
	 int val=st.top();
	   st.pop();
	insert(st,num);
	 st.push(val);
	 return;
}
void sortStack(stack<int> &st)
{
	if(st.empty())return;
	int top=st.top();
	st.pop();
	sortStack(st);
	insert(st,top);
}
