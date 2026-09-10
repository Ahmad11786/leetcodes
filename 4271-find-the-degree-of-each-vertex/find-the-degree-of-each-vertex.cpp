class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> arr;
        
        for(int i=0;i<matrix.size();i++)
        {int sum=0;
            for(int j=0;j<matrix[i].size();j++)
            {
                sum+=matrix[i][j];
            }
            cout<<sum;
            arr.push_back(sum);
        }
        return arr;
    }
};