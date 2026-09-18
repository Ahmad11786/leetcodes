class Solution {
public:
    int count(vector<int>nums , int  i)
    {
        if(i==nums.size())
        {
            return 0;
        }
        int num = nums[i];
        int digits = 0;

        while(num > 0)
        {
            digits++;
            num = num / 10;
        }

        if(digits % 2 == 0)
        {
            return 1 + count(nums, i + 1);
        }

        return count(nums, i + 1);
    }
    int findNumbers(vector<int>& nums) {
        return count(nums, 0);
    }

};