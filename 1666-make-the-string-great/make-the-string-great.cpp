class Solution {
public:
    string makeGood(string s) {
        for (int i = 1; i < s.size(); i++) {
             if ((s[i] == s[i - 1] + 32) ||
                (s[i] == s[i - 1] - 32)){
                s.erase(i - 1, 2);
                i = max(0, i - 2);
            }
        }
        return s;
     }
};