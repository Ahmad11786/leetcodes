class Solution {
public:
    void subset(vector<int>& num, vector<int>& ans, int i,
                vector<vector<int>>& all) {

        if (i == num.size()) {
            all.push_back(ans);
            return;
        }

        ans.push_back(num[i]);
        subset(num, ans, i + 1, all);

        ans.pop_back();

        while (i + 1 < num.size() && num[i] == num[i + 1]) {
            i++;
        }

        subset(num, ans, i + 1, all);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> arr;
        vector<vector<int>> all;

        subset(nums, arr, 0, all);

        return all;
    }
};