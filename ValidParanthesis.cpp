bool isValidParenthesis(string exp)
{
      int n =exp.length();
      stack<char>st;
      for(int i=0;i<n;++i){
          char ch=exp[i];
           if(ch=='{' || ch=='[' || ch=='('){
               st.push(ch);
           } else {
             if (st.empty())
               return false;
             char top = st.top();
             if ((ch == ')' && top == '(') || (ch == ']' && top == '[') ||
                 (ch == '}' && top =='{')){
                     st.pop();
                 }else{
                     return false;
                 }
           }
      }
      return st.empty();
}
