class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,num=0,i=1,d ;
         while(n>0)
         {
            d=n%10;
            sum+=d;
            n=n/10;
             cout<<d<<" ";
             if(d!=0)
             {
              num +=  d*i;
              i=i*10;
             }
         }
         sum= sum*num;
         return sum;
    }
};