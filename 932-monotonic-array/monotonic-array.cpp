class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool valid1=true,valid2=true,valid=false;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] > nums[i+1])
            {
                valid1 = false;
            }
            if(nums[i]<nums[i+1])
            {
                valid2 = false;
            }
        }
        if(valid1 || valid2) 
           valid=true;
        return valid;
    }
};