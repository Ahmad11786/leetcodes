class Solution {
public:
    vector<int> original;
    vector<int> nums;
    mt19937 gen{random_device{}()};

    Solution(vector<int>& nums) {
        this->nums = nums;
        original = nums;
    }
    
    vector<int> reset() {
        nums = original;
        return nums;
    }
    
    vector<int> shuffle() {
        nums = original;

        for(int i = nums.size() - 1; i > 0; i--)
        {
            int j = uniform_int_distribution<int>(0, i)(gen);

            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }

        return nums;
    }
};