class Solution {
public:
    int maxDepth(string s) {
        int count = 0, i = 0, c = 0;
        while (i < s.size()) {
            if (s[i] == ')') {
                count--;
                i++;
                continue;
            }
            if (s[i] != '(') {
                i++;
                continue;
            }
            count++;

            if (count > c)
                c = count;
            i++;
        }
        return c;
    }
};