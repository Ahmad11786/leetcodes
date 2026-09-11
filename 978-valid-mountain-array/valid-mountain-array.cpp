class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool increase = true, decrease = false;
        int count = 0;

        if(arr.size() < 3)
            return false;
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] == arr[i + 1])
                return false;
            if(increase)
            {
                if(arr[i] < arr[i + 1])
                    continue;
                else
                {
                    if(i == 0)
                        return false;
                    increase = false;
                    decrease = true;
                    count++;
                }
            }
            if(decrease)
            {
                if(arr[i] > arr[i + 1])
                    continue;
                else
                    return false;
            }
        }
        if(count == 0)
            return false;
        return true;
    }
};