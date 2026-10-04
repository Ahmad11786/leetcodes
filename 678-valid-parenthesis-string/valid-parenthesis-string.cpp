class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                open.push(i);
            }
            else if(s[i]=='*')
            {
                st.push(i);
            }
            else{
                if(!open.empty())
                {
                    open.pop();
                }
               else if(!st.empty()){
                    st.pop();
                }
                else return false;
            }
        }
        while(!open.empty() && !st.empty()){
            if(open.top()>st.top()){
                return false;
            }
            open.pop();
            st.pop();
        }
        return open.empty();
    }
};