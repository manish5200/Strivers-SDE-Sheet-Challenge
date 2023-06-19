#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
       int* arr;
       int Top; //top index
       int n;
    Stack(int capacity){
         arr=new int[capacity];
         Top=-1;
         this->n=capacity;
    }

    void push(int num) {
        if(Top==n){
            return;
        }
        Top++;
        arr[Top]=num;
    }

    int pop() {
        if(Top==-1) return -1;
        int temp=arr[Top];
        Top--;
        return temp;
    }
    
    int top() {
        if(Top==-1)return -1;
        return arr[Top];
    }
    
    int isEmpty() {
        return Top==-1;
    }
    
    int isFull() {
        return (Top==n);
    }
    
};

//Using Stack only
#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
       stack<int>st;
       int n;
    Stack(int capacity) {
         n=capacity;
    }

    void push(int num) {
        st.push(num);
    }

    int pop() {
        if(st.empty()){
            return -1;
        }
         int ans= st.top();
          st.pop();
        return ans;
    }
    
    int top() {
        if(st.empty())return -1;
        return st.top();
    }
    
    int isEmpty() {
        return st.empty();
    }
    
    int isFull() {
        return st.size()==n;
    }
    
};
