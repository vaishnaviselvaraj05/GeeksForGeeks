
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(auto c : s)
        {
            if(c == '[' || c == '{' || c =='(')
            {
                st.push(c);
            }
            else if(c == ']' || c == '}' || c == ')')
            {
                if(st.empty()){
                    return false;
                }
            
            char top = st.top();
            if(c == ']' && top != '[' || c == '}' && top !='{' || c == ')' && top != '(')
            {
                return false;
            }
            
            st.pop();
        }
        }
        return st.empty();
    }
};