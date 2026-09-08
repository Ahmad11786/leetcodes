class Solution {
public:
    int countCommas(int n) {
        int i=999;
        long long count=0,j=999;
        if(n <= 999)
        {
            return 0;
        }
        while(j!=n)
        {
             count += 1;
             j++;

        }
       
        return count;
    }
};