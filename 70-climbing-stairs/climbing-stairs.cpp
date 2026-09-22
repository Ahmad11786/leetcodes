class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
        {
            return n;
        }
        
         int c=1;
         int b=2;
            for(int i=3;i<=n;i++)
            {
                int a=c+b;
                c=b;
                b=a;
            }
        return b;
    }
};