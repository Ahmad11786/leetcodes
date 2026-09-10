class Solution {
public:
    long long removeZeros(long long n) {
        long long num=0, d,i=1;
        while(n!=0)
        {
            d= n%10;
            if(d!=0)
            {
                num += d*i; 
                i=i*10;
            }
            n= n/10;
            
            cout<<d;
        }
        
        return num;
    }
};