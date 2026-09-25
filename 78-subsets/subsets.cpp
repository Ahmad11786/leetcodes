class Solution {
public:
    void subset(vector<int> &num, vector<int> &ans, int i, vector<vector<int>> &all) {
        if(i==num.size())
    {
        all.push_back({ans});
        return;
    }

    ans.push_back(num[i]);
    subset(num, ans, i + 1, all);

    ans.pop_back();
    subset(num, ans, i + 1, all);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> arr;
    vector<vector<int>> all;
    subset(nums, arr, 0, all);
    return all;
}
}
;