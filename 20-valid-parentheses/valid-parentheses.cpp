class Solution {
public:
    bool isValid(string s) {
        stack<char> opening;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                opening.push(s[i]);
            } else {
                if (opening.size() == 0)
                    return false;

                if ((s[i] == ')' && opening.top() == '(') ||
                    (s[i] == ']' && opening.top() == '[') ||
                    (s[i] == '}' && opening.top() == '{')) {
                    opening.pop();
                } else
                    return false;
            }
        }
        return opening.size()==0;
    }
};