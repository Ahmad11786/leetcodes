class Solution {
public:
 vector<int> smallerNumbers(vector<int>& nums,int i)
 {
    if(nums.size()==i)
    {
      return {};
    }
    int sum=0;
    for(int j=0;j<nums.size();j++)
    {
       if( nums[i]>nums[j]){
        sum++;
       }
    }
    
    
    vector<int> sum1= smallerNumbers( nums,i+1);
    // sum1.push_back(sum);
    sum1.insert(sum1.begin(),sum);
     return sum1;
 }
    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        return smallerNumbers(nums,0);
    }
};