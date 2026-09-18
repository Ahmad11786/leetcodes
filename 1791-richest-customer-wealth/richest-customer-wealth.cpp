class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        return wealth(accounts, 0);
    }

    int wealth(vector<vector<int>>& accounts, int i) {
        if(i == accounts.size())
            return 0;

        int sum = 0;

        for(int j = 0; j < accounts[i].size(); j++)
        {
            sum += accounts[i][j];
        }

        int next = wealth(accounts, i + 1);

        return max(sum, next);
    }
};