class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       vector<int> n;
       for(int i=0; i<arr.size(); i++){

        n.push_back(arr[i]);
        if(arr[i] == 0 && n.size() < arr.size()){
            n.push_back(arr[i]);
        }
        if(n.size() == arr.size()) break;

       }
       arr = n; 
    }
};