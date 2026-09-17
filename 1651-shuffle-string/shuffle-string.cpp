class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shu=s;
        int n=0;
        for(int i=0;i<indices.size();i++)
        {
           shu[ indices[i]]=s[i];
        }
        return shu;
    }
};