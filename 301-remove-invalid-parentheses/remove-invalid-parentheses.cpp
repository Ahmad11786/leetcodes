class Solution {
public:

    bool valid(string s) {
        int count = 0;

        for (char c : s) {
            if (c == '(')
                count++;

            else if (c == ')') {
                count--;

                if (count < 0)
                    return false;
            }
        }

        return count == 0;
    }

    void solve(string s, int index, int remove, unordered_set<string>& ans) {

        if (remove == 0) {
            if (valid(s))
                ans.insert(s);

            return;
        }

        for (int i = index; i < s.size(); i++) {

            if (s[i] != '(' && s[i] != ')')
                continue;

            string next = s.substr(0, i) + s.substr(i + 1);

            solve(next, i, remove - 1, ans);
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        int balance = 0;
        int remove = 0;

        for (char c : s) {

            if (c == '(') {
                balance++;
            }

            else if (c == ')') {

                if (balance > 0)
                    balance--;
                else
                    remove++;
            }
        }

        remove += balance;

        unordered_set<string> ans;

        solve(s, 0, remove, ans);

        return vector<string>(ans.begin(), ans.end());
    }
};