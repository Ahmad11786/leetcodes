class Solution {
public:
    int scoreOfString(string s) {
        int sum=0 ,d=0;
        for(int i=1;i<s.size();i++)
        {
            d= s[i-1]-s[i];
           cout<<d<<" ";
            sum +=abs(d);
        }
        return sum;
    }
};