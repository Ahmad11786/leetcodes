class Solution {
public:
    int small(vector<int> num , int i)
    {
        if(i==num.size())
        {
            return -1;
        }
        int d, sum=0;
 while(num[i]!=0){
          d= num[i]%10;
          num[i] = num[i]/10;
          sum = sum + d;
 }
         if(sum==i)
         {
            return i;
         }
    
      return  small(num,i+1);

    }
    int smallestIndex(vector<int>& nums) {
        
       return small(nums,0);
    }
};