class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0;
        stack<int> dep;
        dep.push(0);
        for (char ch : s) {
            if (ch == '(') {
                dep.push(0);
            } else {
                int top = dep.top();
                
                dep.pop();

                if (top == 0) {
                    ans = 1;
                } else {
                    ans = 2 * top;
                }
                dep.top()+=ans;
            }
            
        }
        return dep.top();
    }
};