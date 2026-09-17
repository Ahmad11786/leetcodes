class Solution {
public:
   int bin(vector<int>& nums, int target,int str, int end)
   {
    if(str<=end)
    {

int mid= str + (end-str)/2;
     if(nums[mid]== target) return mid;
     else if( nums[mid] <= target) {
        return bin(nums,target,mid+1,end);
     }
     else
     {
        return bin(nums,target,str,end-1);

     }

    }
    return -1;
   }
    int search(vector<int>& nums, int target) {
     return   bin(nums,target,0,nums.size()-1);
    }
};