class Solution {
public:
;
    void get(vector<int>& num, int ind,vector<vector<int>> &ans) {
        
        if(ind == num.size()) {
            ans.push_back({num});
            return;
        }
        for(int i=ind;i<num.size();i++){
            swap(num[i],num[ind]);
            get(num,ind+1,ans);
            swap(num[i],num[ind]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
     get(nums,0,ans);
     return ans;
    }
};