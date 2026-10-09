class Solution {
public:
    int minInsertions(string s) {
        int open = 0, close = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                ++open;
            } else {
                if (open > 0) {
                    --open;
                } else {
                    ++close;
                }

                if (i + 1 < s.size() && s[i + 1] == ')') {
                    ++i;
                } else {
                    ++close;
                }
            }
        }
        cout << close << " " << open;
        return close + open * 2;
    }
};