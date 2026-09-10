class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int i=0;
        int a=nums[0];
        while(i<nums.size())
        {
           if(0==nums[i])
           {
            a=nums[i];
            return a;
           }

          if(abs(nums[i]) < abs(a))
            {
                a = nums[i];
            }
            else if(abs(nums[i]) == abs(a) && nums[i] > a)
            {
                a = nums[i];
            }
            i++;

        }

       return a;
    }
};