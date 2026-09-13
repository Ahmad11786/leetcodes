class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        long long sum=0,i=0,j=mat.size()-1;
        
        while(i<mat.size())
        {
           if(i!=j)
            sum+=mat[i][i]+ mat[i][j];
            
            if(i==j) sum+=mat[i][i];
            cout<< mat[i][i]<<"  "<<mat[i][j]<<endl;
            i++;
            j--;
        }
        return sum;
    }
};