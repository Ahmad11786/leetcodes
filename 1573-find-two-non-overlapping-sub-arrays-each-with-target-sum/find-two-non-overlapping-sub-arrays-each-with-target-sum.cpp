class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size();

        vector<int> prefix(n + 1, 0);
        vector<int> best(n + 1, INT_MAX);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }

        int ans = INT_MAX;

        unordered_map<int, int> mp;

        mp[0] = 0;

        for (int i = 1; i <= n; i++) {

            best[i] = best[i - 1];

            int required = prefix[i] - target;

            if (mp.find(required) != mp.end()) {

                int start = mp[required];

                int length = i - start;

                if (start >= 0 && best[start] != INT_MAX) {
                    ans = min(ans, length + best[start]);
                }

                best[i] = min(best[i], length);
            }

            mp[prefix[i]] = i;
        }

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};