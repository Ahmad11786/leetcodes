class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1;
        if(n<=0)
        {
            return 0;
        }
        long long sum=0;
        for(int i=3;i<=n;i++)
        {   
            sum=a+b+c;
            a=b;b=c;c=sum;
            
        }
        return c;
    }
};